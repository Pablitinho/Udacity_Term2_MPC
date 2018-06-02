#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"


// Weights for COST FUNCTION
#define W_CTE 4000
#define W_EPSI 4000
#define W_V 2
#define W_DELTA 5
#define W_A 5
#define W_D_V 800
#define W_DDELTA 20000
#define W_DA 10

using namespace std;

class MPC {
 public:
  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);
};

#endif /* MPC_H */
