# 16-08-2022
Pixcube and Arduino Intigration with mavlink (changing the flighe mode using arduino)                                                                                     
Burn this code on ardino, connect TX pin of the pixcube telemetory 2 port to RX pin of the arduino, connect RX pin of the pixcube to TX pin of the arduino. Ground pin to 
Ground.                                                                      
Power up the cube in the preflight section you will see that the default mode is stabilize and when you powerup the arduino arduino will send continuous message to the the cube to change the flight mode from stabilize to AltHold. 
