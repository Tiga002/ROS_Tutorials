// Include all the require libraries 
#include "ros/ros.h"
#include "tutorials/mySRV.h"  // the header file generated from the ./srv/mySRV.srv

// Function of a Server  --> Do something, after completed, return true
bool add_function(tutorials::mySRV::Request &req,
	     tutorials::mySRV::Response &res)
{
	/* Recall mySRV.srv
		int64 a
		int64 b
		---
		int64 sum
    */
	// Calcuate the response
    res.sum = req.a + req.b;
   // Display here
    ROS_INFO("Request : x = %d, y = %d", (int)req.a, (int)req.b);
    ROS_INFO("Sending Back Response : sum = [%d]", (int)res.sum);
   // return true after server complete the process
   return true;

}

// Node Main Function
int main(int argc, char**argv)
{
	// Initial the Node
	ros::init(argc, argv, "Adding_Two_Integer_Server_Node");
	ros::NodeHandle n;

	// Create the Service and advertise over the ROS !!!! 
	ros::ServiceServer adding_service = n.advertiseService("add_two_integers", add_function);
	ROS_INFO("Ready to perform server processing");
	ros::spin();
	
	return 0;
}
