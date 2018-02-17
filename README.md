# Arduino-roboarm
I2C communication with PSD and servo 

This code uses three arduino. Having one master and other two as slaves.
As mentioned they use I2C communication, each of the slave has its own address and they both are connected to the master.
This code contains one way communication between the master to slave. The master sends the PDS values to the slaves each slave has a servo to control .
