#include "ros/ros.h"
#include "sensor_msgs/JointState.h"
#include <cmath>

class JointGoalPublisher{
	private:
		ros::Publisher publisher;
		ros::Subscriber subscriber;
		sensor_msgs::JointState joint_state;


	public:
		JointGoalPublisher(ros::NodeHandle *nh, std::string joint,std::string goal)
		{
			publisher = nh->advertise<sensor_msgs::JointState>(goal,10);
			subscriber = nh->subscribe(joint, 10, &JointGoalPublisher::callback_func, this);
		}
		
		void callback_func(const sensor_msgs::JointState &msg)
		{
			float j1,j2,j3;
			j1 = msg.position[0];
			j2 = msg.position[1];
			j3 = msg.position[2];
		
			joint_state = msg;
		}

		void updateGoal()
		{
			publisher.publish(joint_state);
		}
}

int main(int argc, char** argv)
{
	std::string TOPIC_JOINT = "/joint_states";
	std::string TOPIC_GOAL = "/dobot/joint_goal";
	
	if(argc>=3)
	{
		if(argv[1][0] == "/")
		{
			TOPIC_JOINT = argv[1];
		}
		if(argv[2][0] == "/")
		{
			TOPIC_JOINT = argv[2];
		}
	}


	ros::init(argc,argv,"joint_goal_publisher");
	ros::NodeHandle nh;

	JointGoalPublisher GoalPublisher = JointGoalPublisher(&nh,TOPIC_JOINT,TOPIC_GOAL);
	
	ros::spinOnce();

	while(ros::ok())
	{
		std::cout << "Press the Enter Key To Send A New Joint Goal"<<std::endl;
		std::cout.flush();
		std::cin.ignore();
		ros::spinOnce();
		
		GoalPublisher.updateGoal();
		
		ros::spinOnce();
	}
}
