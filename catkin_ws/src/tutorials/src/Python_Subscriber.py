#!/usr/bin/env python
import rospy
from std_msgs.msg import String

def msgCallback(data):
    # Display (Process) the message
    rospy.loginfo("Just received : %s", data.data)

def main():
    #Declare the Node Name
    rospy.init_node('Py_Subscriber_Node', anonymous=True)
    #Declare a subscriber for this node named: "Py_SUB"
    #Subscribing a topic called "tutorial_topic", with the message type <std_msgs::String>
    #The message once subscribed will be passed to the msgCallback Function
    Py_SUB = rospy.Subscriber("tutorial_topic", String, msgCallback)

    # spin() keeps python from exiting until this node is stopped
    rospy.spin()

# Main Auto Run
if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass

    
