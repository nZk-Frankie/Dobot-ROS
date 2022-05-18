#include "ros/ros.h"
#include "dobot/CartesianSimple.h"
#include "dobot/PTPCommand.h"
#include "dobot/SetPTPCmd.h"

void cartesianCallback(const dobot::CartesianSimple& msg)
{
	dobot::PTPCommand msgOut;
	msgOut.ptpMode = MOVL_XYZ;
	msgOut.x = msg.x;
	msgOut.y = msg.y;
	msgOut.z = msg.z;
	msgOut.r = msg.r;

	ptp_commands_pub.publish(msgOut);
}

void jointCallback(const sensor_msgs::JointState& msg)
{
	dobot::PTPCommand msgOut;
	msgOut.ptpMode = JUMP_ANGLE;
	
	msgOut.x = msg.position[0];
	msgOut.y = msg.position[1];
	msgOut.z = msg.position[2];
	msgOut.r = msg.position[3];

	ptp_commands_pub.publish(msgOut);
}

void quatCallback(const geometry_msgs::Pose &msg)
{
	dobot::PTPCommand msgOut;
	double r_inrad;
	msgOut.ptpMode = MOVJ_XYZ;
	msgOut.x = msg.position.x;
	msgOut.y = msg.position.y;
	msgOut.z = msg.position.z;

	r_inrad = 2*cos(msg.orientation.w);
	r = rad_to_deg(r_inrad);
	
	msgOut.r = r;
	
	ptp_commands_pub.publish(msgOut);

}

int main(int argc, char ** argv)
{
	ros::init(argc,argv,"ptp_goal_listener");
	ros::NodeHandle nh;
	
	ros::Subscriber cartesian_simple_goal;
	ros::Subscriber joint_goal;
	ros::Subscriber cartesian_quat_goal;
	ros::Publisher ptp_commands_pub;

	cartesian_simple_goal = nh.subscribe("/dobot/cartesian_simple_goal",1000,cartesianCallback);
	joint_goal = nh.subscribe("/dobot/joint_goal",1000,jointCallback);
	cartesian_quat_goal = nh.subscribe("/dobot/cartesian_quat_goal",1000,quatCallback);

	//transform each message 

	ptp_commands_pub = nh.advertise<dobot::PTPCommand>("/dobot/ptp_commands");




	return 0;
}


