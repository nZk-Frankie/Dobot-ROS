/**
 * File Name:   pose_publisher.cpp
 * Author:       
 * Package:     /dobot
 * Description: This file contains code for a ROS node that connects to the DobotServer service GetPose, and publishes its data to ROS topics
 */

/** Note:   This file contains detailed comments to provide more thorough explanations of the classes and functions used.
 *          Files provided for future tasks will not be as densely commented.
 */


//  ros.h must be included in all scripts for ROS nodes.
#include "ros/ros.h"

//  Include the GetPose service, the definition of which can be found in the /srv folder within the /dobot package.
#include "dobot/GetPose.h"

//  Include the custom message format CartesianSimple, the definition of which can be found in the /msg folder within the /dobot package.
#include "dobot/CartesianSimple.h"

#include "geometry_msgs/Pose.h"
#include "sensor_msgs/JointState.h"

//  Include the C++ cmath library. Useful examples of its contents are the function std::sin() and the variable M_PI.
#include <cmath>



//  C++ Class for a PoseClientPublisher instance.
//  This class is responsible for calling the /DobotServer/GetPose service, and publishing the response data to appropriate topics when updatePose() is called.
class PoseClientPublisher {
    //  Declare private variables for this class
    private:
        ros::ServiceClient pose_client;  // Client instance
        dobot::GetPose getPose_srv;  // Service variable to be passed when calling GetPose
        ros::Publisher cartesian_pose_simple_pub;  // Publisher for the simple cartesian pose
		ros::Publisher joint_angle_pub;
		ros::Publisher quat_pub;

    //  Declare public functions for this class
    public:
        //  Constructor for PoseClientPublisher object.
        //  Imports a pointer variable to the ros::NodeHandle object for this particular node.
        PoseClientPublisher(ros::NodeHandle *nh) {
            // Create a client for the service /DobotServer/GetPose of type dobot::GetPose
            pose_client = nh->serviceClient<dobot::GetPose>("/DobotServer/GetPose");
            // Create a publisher to publish on the topic /dobot/cartesian_pose_simple with maximum queue size of 10.
            // The message type for this topic is dobot::CartesianSimple, defined in /msg/CartesianSimple.h
            cartesian_pose_simple_pub = nh->advertise<dobot::CartesianSimple>("/dobot/cartesian_simple_pose", 10);
			joint_angle_pub = nh->advertise<sensor_msgs::JointState>("/dobot/joint_state_msg",10);
			quat_pub = nh->advertise<geometry_msgs::Pose>("/dobot/pose",10);


            // Because the variable 'nh' is a pointer, 'nh->' is used instead of 'nh.'
        }

        //  Calls the GetPose service, then publishes the result
        void updatePose() {
            //  Call the GetPose service attached to pose_client, passing getPose_srv to attain the service response
            pose_client.call(getPose_srv);

            //  Create a message of type dobot::CartesianSimple
            dobot::CartesianSimple cartesian_pose_simple_msg;
            sensor_msgs::JointState joint_state_msg;
			geometry_msgs::Pose quat_state_msg;

            //  Set the message data to the corresponding variables from the service response
            cartesian_pose_simple_msg.x = getPose_srv.response.x;
            cartesian_pose_simple_msg.y = getPose_srv.response.y;
            cartesian_pose_simple_msg.z = getPose_srv.response.z;
            cartesian_pose_simple_msg.r = getPose_srv.response.r;
			cartesian_pose_simple_pub.publish(cartesian_pose_simple_msg);


            //  Publish the message using the appropriate publisher
            joint_state_msg.name.resize(4);
			joint_state_msg.position.resize(4);

			joint_state_msg.name[0]="J1"; joint_state_msg.position[0]= deg_to_rad(getPose_srv.response.jointAngle[0]);
			joint_state_msg.name[1]="J1"; joint_state_msg.position[1]= deg_to_rad(getPose_srv.response.jointAngle[1]);
			joint_state_msg.name[2]="J1"; joint_state_msg.position[2]= deg_to_rad(getPose_srv.response.jointAngle[2]);
			joint_state_msg.name[3]="J1"; joint_state_msg.position[3]= deg_to_rad(getPose_srv.response.jointAngle[3]);
			
			joint_angle_pub.publish(joint_state_msg);

			//quat
			quat_state_msg.position.x = getPose_srv.response.x;
			quat_state_msg.position.y = getPose_srv.response.y;
			quat_state_msg.position.z = getPose_srv.response.z;

			double r_inrad = deg_to_rad(getPose_srv.response.r);
		
			double cy = cos(r_inrad*0.5);
			double sy = sin(r_inrad*0.5);
			double cp =1;
			double sp =0;
			double cr =1;
			double sr = 0;
			
			quat_state_msg.orientation.w = cr * cp * cy + sr * sp * sy;
			quat_state_msg.orientation.x = sr * cp * cy - cr * sp * sy;
			quat_state_msg.orientation.y = cr * sp * cy + sr * cp * sy;
			quat_state_msg.orientation.z = cr * cp * sy - sr * sp * cy;

			quat_pub.publish(quat_state_msg);
        }

        //  Converts an angle from degrees to radians
        float deg_to_rad(float deg_angle) {
            return deg_angle*(M_PI/180.0);
        }

};  // End definition of class PoseClientPublisher


//  main function - run upon this file being executed.
//  Initialises the ROS node, and checks for the service /DobotServer/GetPose.
//  If the service is available, instantiates a PoseClientPublisher object and loops PoseClientPublisher.updatePose() at a fixed rate.
int main(int argc, char **argv)
{
    // Initialise the node in ROS, and create a NodeHandle instance
    ros::init(argc, argv, "pose_publisher");
    ros::NodeHandle nh;

    //  Check whether /DobotServer/GetPose service is available, with a timeout of 10 seconds
    bool getPose_service_available = ros::service::waitForService("/DobotServer/GetPose", 10000);

    if (getPose_service_available) {
        //  Service is available.
        ROS_INFO("pose_publisher: Connected to service /DobotServer/GetPose."); // Outputs to /rosout at the INFO level

        //  Construct an object instance of PoseClientPublisher
        PoseClientPublisher pose_publisher = PoseClientPublisher(&nh);

        ros::Rate rate(5); // Object which tracks a rate of 5 Hz

        //  Loop until node is shutdown.
        while (ros::ok()) {
            pose_publisher.updatePose(); // Calls function within object variable.
            ros::spinOnce(); // spinOnce() will call all callback functions waiting to be called at this time.
            rate.sleep(); // sleep() will wait until the start of the next loop, with a frequency determined by the rate variable.
        }
    }
    else {
        // Service is unavailable after timeout period.
        ROS_ERROR("pose_publisher: Unable to connect to service /DobotServer/GetPose."); // Outputs to /rosout at the INFO level
        ros::requestShutdown(); // Shuts down node
    }

    return 0;
}

