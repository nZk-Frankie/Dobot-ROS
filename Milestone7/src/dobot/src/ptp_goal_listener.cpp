#include "ros/ros.h"
#include "dobot/CartesianSimple.h"
#include "dobot/PTPCommand.h"
#include "dobot/SetPTPCmd.h"
#include "sensor_msgs/JointState.h"
#include "geometry_msgs/Pose.h"
#include "dobot/GetPose.h"

#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>



ros::Publisher ptp_commands_pub;

float rad_to_deg(float rad_angle) {
     return rad_angle*(180.0/3.14159265359);
}


void cartesianCallback(const dobot::CartesianSimple &msg)
{
	dobot::PTPCommand msgOut;
	msgOut.ptpMode = 2;//MOVL_XYZ;
	msgOut.x = msg.x;
	msgOut.y = msg.y;
	msgOut.z = msg.z;
	msgOut.r = msg.r;

	ptp_commands_pub.publish(msgOut);
}

void jointCallback(const sensor_msgs::JointState &msg)
{
	dobot::PTPCommand msgOut;
	msgOut.ptpMode = 4; //MOVJ_angle
	
	msgOut.x = msg.position[0]*180.0/3.1415;
	msgOut.y = msg.position[1]*180.0/3.1415;
	msgOut.z = msg.position[2]*180.0/3.1415;
	msgOut.r = msg.position[3]*180.0/3.1415;

	ptp_commands_pub.publish(msgOut);
}

void quatCallback(const geometry_msgs::Pose &msg)
{
	dobot::PTPCommand msgOut;
	float r_inrad,r;
	msgOut.ptpMode = 1;//movj xyz
	msgOut.x = msg.position.x;
	msgOut.y = msg.position.y;
	msgOut.z = msg.position.z;

	tf2::Quaternion q;
	tf2::fromMsg(msg.orientation,q);
	double roll,pitch,yaw;
	tf2::Matrix3x3(q).getRPY(roll,pitch,yaw);

	msgOut.r = yaw*180/3.1415;
	
	ptp_commands_pub.publish(msgOut);

}


int main(int argc, char ** argv)
{
	ros::init(argc,argv,"ptp_goal_listener");
	ros::NodeHandle nh;

	ptp_commands_pub = nh.advertise<dobot::PTPCommand>("dobot/ptp_commands",10);
	
	ros::Subscriber cartesian_simple_goal;
	ros::Subscriber joint_goal;
	ros::Subscriber cartesian_quat_goal;

	cartesian_simple_goal = nh.subscribe("/dobot/cartesian_simple_goal",1000,cartesianCallback);
	joint_goal = nh.subscribe("/dobot/joint_goal",1000,jointCallback);
	cartesian_quat_goal = nh.subscribe("/dobot/cartesian_quat_goal",1000,quatCallback);

	ros::spin();





	return 0;
}


