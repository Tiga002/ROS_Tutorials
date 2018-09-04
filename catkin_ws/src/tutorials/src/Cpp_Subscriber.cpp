// Include all the required headers"
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>
#include <sstream>


// msgCallback Function
void msgCallback(const std_msgs::String::ConstPtr& msg)
{
	//Processed the incoming callbaced msg
	ROS_INFO("Just received :[%s]", msg->data.c_str());
}
// Node Main function
int main(int argc, char**argv)
{

  //Declare the Node Name
  ros::init(argc,argv,"Cpp_Subscriber_Node");
  // Tell that im a Node
  ros::NodeHandle n;
  // Declare a subscriber for this node named: "Cpp_SUB"
  //Subscribing a topic called "tutorial_topic", with the message type <std_msgs::String>
  // The message once subscribed will be passed to the msgCallback Function
  ros::Subscriber Cpp_SUB = n.subscribe<std_msgs::String>("tutorial_topic", 1000, msgCallback);  // queue size = 100
  ros::spin();
  return 0;
}