#!/usr/bin/env python
import rospy
from std_msgs.msg import String

def main():
	
    #Declare the Node Name
    rospy.init_node('Py_Publisher_Node', anonymous=True)
    #Declare a publisher for this node named: "PyPUB"
    #Publishing a topic called "tutorial_topic", with the message type <std_msgs::String>
    Py_PUB = rospy.Publisher('tutorial_topic', String, queue_size=10)
    #Setup the Node running rate, 10 = 10 Hz 
    rate = rospy.Rate(10) 
    while not rospy.is_shutdown():
    	# Create the message
    	message_str = "Hello World %s" % rospy.get_time()
        # Display the message here
        rospy.loginfo(message_str)
        #Publish the Message !!!
        Py_PUB.publish(message_str)
        #Pause the Loop rate while publishing
        rate.sleep()

# Main Auto Run
if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass


    		
