#include "ros/ros.h"
#include "dobot/CartesianSimple.h"

void cartesianCallback(const dobot::CartesianSimple& msg)
{
}

void jointCallback(const ???)
{
}

void quatCallback(const ??)
{
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


