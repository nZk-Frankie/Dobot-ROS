/** Do Milestone 8.5 First before going into this**/
/**IDK if you need to include dobot/PTPCommand.h**/
#include "ros/ros.h"
#include "dobot/CartesianSimple.h"
#include <cmath>
#include "dobot/SetPTPCmd.h"
#include "dobot/PTPCommand.h"


class PTPCommandClient
{
	private:
		ros::ServiceClient SetPTP_Client;
		dobot::SetPTPCmd ptp;
		ros::Subscriber ptp_subs;
	public:
		PTPCommandClient(ros::NodeHandle *nh)
		{
			SetPTP_Client = nh->serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");
			ptp_subs = nh->subscribe("/dobot/ptp_commands",10,&PTPCommandClient::callback_ptp,this);
		}

			void callback_ptp(const dobot::PTPCommand& msg)
			{
				dobot::SetPTPCmd::Request req;
				req.ptpMode = msg.ptpMode;
				req.x = msg.x;
				req.y = msg.y;
				req.z = msg.z;
				req.r = msg.r;

				dobot::SetPTPCmd ptp{req};
				SetPTP_Client.call(ptp);
			}		
};


int main(int argc, char ** argv)
{

	ros::init(argc,argv,"ptp_command_client");
	ros::NodeHandle nh;

	bool ptp_service_available = ros::service::waitForService("/DobotServer/SetPTPCmd",10000);
	if(ptp_service_available)
	{
		ROS_INFO("PTP_COMMAND: Connected to service /DobotServer/SetPTPCmd");

		PTPCommandClient PTP_CLIENT = PTPCommandClient(&nh);
		ros::Rate rate(5);
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
	return 0;

}

