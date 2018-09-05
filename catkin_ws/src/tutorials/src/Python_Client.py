#!/usr/bin/env python

import sys
import rospy
from tutorials.srv import *

def Client_Main_Function(x, y):
	#No  need to initial this node
	# We wait until the service server is avaliable
	rospy.wait_for_service('add_two_integers')
	try:
		# Create a Service Proxy/Handler -- that can be used like traditional functions
		# Service name = add_two_integers
		# Service Type = mySRV
		add_two_integers_service = rospy.ServiceProxy('add_two_integers', mySRV)
		response = add_two_integers_service(x, y)
		return response.sum
	except rospy.ServiceException, e:
		print("Service call failed: %s" %e)

def usage():
	return "%s [x y]"%sys.argv[0]

if __name__ == "__main__":
	if len(sys.argv) == 3:
		x = int(sys.argv[1])
		y = int(sys.argv[2])
	else:
		print usage()
		sys.exit(1)
	print("Requesting %s + %s" %(x, y))
	print("Response is [%s] ~~~"%Client_Main_Function(x, y))

