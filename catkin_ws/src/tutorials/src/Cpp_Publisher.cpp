// Include all the required headers"
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>
#include <sstream>

// Node Main Function
int main(int argc, char**argv) {
  //Declare the Node Name
  ros::init(argc,argv,"Cpp_Publisher_Node");
  // Tell that im a Node
  ros::NodeHandle n;
  // Declare a publisher for this node named: "Cpp_PUB"
  //Publishing a topic called "tutorial_topic", with the message type <std_msgs::String>
  ros::Publisher Cpp_PUB = n.advertise<std_msgs::String>("tutorial_topic", 1000);  // queue size = 1000

  // Setup the Node running rate, 10 = 10 Hz 
  ros::Rate	loop_rate(10);
  int count = 0;
  while(ros::ok())
  {
  	// Create a message name "tutorial_msg" with the type std_msgs::String
  	std_msgs::String tutorial_msg;
  	// Create a message that change everyloop --> using <sstream>> 
  	std::stringstream ss;
    ss << "Hello World" << count;
    // Asign the message data to the message object itself
    tutorial_msg.data = ss.str();
    // Display the message content
    ROS_INFO("%s", tutorial_msg.data.c_str());

    //Publish the message !!!
    Cpp_PUB.publish(tutorial_msg);

    //Make sure the node at least running once
    ros::spinOnce();
    //Pause the Loop rate while publishing
    loop_rate.sleep();
    count++;
  }

  return 0;
}
