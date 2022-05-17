/**
 * File Name:   joint_visuals_converter.cpp
 * Author:      Abraham Fernandez
 * Package:     /display
 * Description: This file contains code for a ROS node that converts Dobot joint angles to a format compatible with the dobot_visuals URDF file for the purpose of visualisation.
 */

#include "ros/ros.h"

#include "sensor_msgs/JointState.h"

#include <cmath>


//  This class manages a subscriber to a joint state topic, and publishes another set of joint states for the Dobot visual URDF to another topic
class JointVisualsConverter {
    private:
        ros::Publisher visual_joint_pub;
        ros::Subscriber joint_pose_sub;

    public:
        //  Constructor, which sets up a publisher and subscriber each on topics taken as string imports
        JointVisualsConverter(ros::NodeHandle *nh, std::string joint_topic, std::string visuals_topic) {
            visual_joint_pub = nh->advertise<sensor_msgs::JointState>(visuals_topic, 10);
            joint_pose_sub = nh->subscribe(joint_topic, 10, &JointVisualsConverter::callback_convert_joints, this);
        }

        //  Callback function for subscriber to joint states.
        //  The input message is assumed to contain Dobot joint angles in radians
        //  The output message is joint states for the Dobot visuals URDF
        void callback_convert_joints(const sensor_msgs::JointState& msg) {
            //  Create variables for input joint angles (joint_4 is not visualised and so not defind here)
            float joint_1 = msg.position[0];
            float joint_2 = msg.position[1];
            float joint_3 = msg.position[2];

            //  Create output message
            sensor_msgs::JointState visual_joint_msg;
            //  Copy header, so that the time 'stamp' matches
            visual_joint_msg.header = msg.header;
            visual_joint_msg.name = {"joint_1", "joint_2", "joint_3", "stable_joint"};
            //  Calculate converted joints. Values are based on the visuals URDF to match the actual Dobot movement.
            float visual_joint_1, visual_joint_2, visual_joint_3, visual_stable_joint;
            visual_joint_1 = M_PI/2.0+joint_1;
            visual_joint_2 = 0.2077+joint_2;
            visual_joint_3 = 1.2898+joint_2-joint_3;
            visual_stable_joint = 1.0821-joint_3;
            visual_joint_msg.position = {visual_joint_1, visual_joint_2, visual_joint_3, visual_stable_joint};
            //  Publish message
            visual_joint_pub.publish(visual_joint_msg);
        }
};


//  main function: checks arguments for ROS topic names, then creates a JointVisualsConverter for converting between two topics
int main(int argc, char **argv)
{
    //  Define default topics
    std::string joint_topic = "/joint_states";
    std::string visuals_topic = "/visuals_joint_states";

    /* Edit this out later once tested
    std::cout << "arg 0: " << argv[0] << "\n";
    std::cout << "arg 1: " << argv[1] << "\n";
    std::cout << "arg 2: " << argv[2] << "\n";
    */

   //  Check for topics in arguments
    if (argc >= 3) {
        //  Topic names must start with '/' to be considered valid.
        if (argv[1][0] == '/') {
            //  Input topic is argv[1]
            joint_topic = argv[1];
        }
        if (argv[2][0] == '/') {
            //  Output topic is argv[2]
            visuals_topic = argv[2];
        }
    }

    //  Initialise node
    ros::init(argc, argv, "joint_visuals_converter");
    ros::NodeHandle nh;

    //  Create object instance for converting, passing topics into constructor
    JointVisualsConverter converter = JointVisualsConverter(&nh, joint_topic, visuals_topic);

    //  Spin until ROS shutdown
    ros::spin();

    return 0;
}



