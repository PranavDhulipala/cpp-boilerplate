/*
 * PID.h
 *
 *  Created on: Sep 20, 2017
 *      Author: Pranav Dhulipala
 */

#ifndef PID_H_
#define PID_H_


/**
 * A PID class used to describe a PID controller's behaviour.
 */

class PID {

  double Kp;  //Proportionality gain
  double Kd;  //Derivative gain
  double Ki;  //Integral gain
  double dt;  //Time interval
  double error;  //variable used to store the difference between the required velocity and actual velocity            
  double previousError;  //variable used to store the previous value of error 
  double errorSum;  //variable used to store the integral of error
  double errorRateOfChange;  //variable used to store the differential of error

 public:
  
/**
* Construtor Declaration as a Public Member
*/

   PID(double kp, double kd, double ki, double t);



/* Compute Function Declaration*/

   double compute(double setPoint, double velocity);
 
/**
* Destructor Declaration
*/

  ~PID();

};


#endif /* PID_H_ */
