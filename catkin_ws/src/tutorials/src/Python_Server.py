#!/usr/bin/env python

from tutorials.srv import *
import rospy

def Handle_Addings(req):
	print("Returning [ %s + %s = %s"%(req.a, req.b, (req.a+req.b)))
	return mySRVResponse(req.a+req.b)

def Server_Main_Function():
	#Initialise the Node
	rospy.init_node("Adding_Two_Integer_Server")
	#Create the Service and advertise over the ROS !!!!
		# Service name = add_two_integers"
		# Service Type = mySRV
		# All the request is passed to the Handle Function - Handle_Addings 
	service = rospy.Service("add_two_integers", mySRV, Handle_Addings)
	print("Ready to Add Two Integers")
	rospy.spin()

if __name__ == "__main__":
	Server_Main_Function()

