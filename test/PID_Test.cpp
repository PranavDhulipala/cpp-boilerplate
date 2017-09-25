/**
 * @file Test_PID.cpp
 * @brief Unit Tests for the Implementation for the PID Controller Class PID
 * @author Pranav Dhulipala
 */

/* --Includes-- */
#include <gtest/gtest.h>
#include "../include/PID.h"

/**
 * @brief test for checking whether the values Kp,Ki,Kd are nonnegative and dt is not less than or equal to zero
 */

TEST(PIDTest, Only_Positive_Values_Allowed) {
	double a=-99,b=-2,c=-44,d=0;
	EXPECT_THROW(PID(a,b,c,d), std::domain_error);

}

/**
 * @brief test for checking if the control output is equal to zero when the setpoint and velocity are equal
 */

TEST(ComputeTest, Set_Point_Equals_Current_Velocity_Output_0) {
  PID pid = PID(0.2,0.1,0.3,0.2);
  EXPECT_EQ(0, (pid.compute(100, 100)));
}
