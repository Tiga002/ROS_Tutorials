// Include all the require libraries 
#include "ros/ros.h"
#include "tutorials/mySRV.h"  // the header file generated from the ./srv/mySRV.srv
#include <cstdlib>

// Main Function of the Node
int main(int argc, char **argv)
{
	// Initial the Node
	ros::init(argc, argv, "Adding_Two_Integer_Client_Node");
    ros::NodeHandle n;
	if (argc != 3)
	{
		ROS_INFO("usage: Adding_Two_Integer_Client X Y");
		return 1;
	}

	// Create the clinet for the "add_two_integers" service
	ros::ServiceClient adding_client = n.serviceClient<tutorials::mySRV>("add_two_integers");

	// Create a Service Class
		// A service class contains 2 members: request and response
	tutorials::mySRV service_class;
	// Assign value to its request member
	service_class.request.a = atoll(argv[1]);
	service_class.request.b = atoll(argv[2]);

	// Call the service !!!!
	   /* Since everytime client can only call once, 
	      --If the Service Call is succeed --> Server return TRUE and the value in service_class.response
	      --If the Service Call did not succeed --> call() will return False 
	    */
	if (adding_client.call(service_class))
	{
		ROS_INFO("Sum of two integers = %d", (int)service_class.response.sum);
	}
	else
	{
		ROS_ERROR("Failed to Call the service !!!");
		return 1;
	}

	return 0;
}