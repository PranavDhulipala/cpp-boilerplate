/**
 * @file main.cpp
 * @brief Builds a PID Controller and computes the output velocity
 * @author Pranav Dhulipala
 */

#include <iostream>
#include "PID.h"

int main() {
//initialize the PID object by passing the values of Kp,Kd,Ki and dt
	double kp=0.5,kd=0.02,ki=0.3,t=0.1;
    PID pid( kp,kd,ki,t);
 
    double velocity=50;  //set the value for the velocity
    double setPoint=100;  //set the value for the setpoint
    double output= pid.compute(setPoint,velocity);  //receive the output in outputVel
    velocity+=output;
    std::cout<<"New Velocity:  "<<velocity<<"\t"<<"Control output: "<<output<<std::endl;
 

    return 0;
}


 
