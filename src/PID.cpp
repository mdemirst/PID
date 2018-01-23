#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {

  
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
  
}

void PID::UpdateError(double cte) {

  
  // d_error is difference from old cte (p_error) to the new cte
  d_error = (cte - p_error);
  // p_error gets set to the new cte
  p_error = cte;
  // i_error is the sum of ctes to this point
  i_error += cte;
  
}

double PID::TotalError() {
  
  // Return the total error of each coefficient multiplied by the respective error
  return -Kp * p_error - Kd * d_error - Ki * i_error;
  
}

