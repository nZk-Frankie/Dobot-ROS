#include "ros/ros.h"
#include "dobot/CartesianSimple.h"
#include <cmath>
class PTPCommandPublisher{
	private:
		ros::ServiceClient SetPTP_Client;
		ros::SetPTPCmd ptp;
		ros::Subscriber ptp_subs;
		ros::Publisher ptp_pubs;
	
	public:
		PTPCommandPublisher(ros::NodeHandle &nh){
			SetPTP_Client = nh->serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");
			ptp_subs = nh->subscribe("/dobot/ptp_commands",1000,ptpCallBack);
}

		

			
}


int main(int argc, char ** argv)
{

	ros::init(argc,argv,"PTP_COMMAND");
	ros::NodeHandle nh;

	bool ptp_service_available = ros::service::waitForService("/DobotServer/SetPTPCmd",10000);\
	if(ptp_service_available)
	{
		ROS_INFO("PTP_COMMAND: Connected to service /DobotServer/SetPTPCmd");

		PTPCommandPublisher publisher = PTPCommandPublisher(&nh);
		ros:Rate rate(5);
		while (ros::ok())
		{
			ros::spin();
			rate.sleep();
		}

	}
	else{
	ROS_ERROR("PTP_Command: Unable to connect to SetPTPCmd servce");
	ros::requestShutdown();

}

