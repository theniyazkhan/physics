#include <stdio.h>
#include <math.h>

void solve() {
    //m1 = 3, θ1 = 65.0, λ1 = 530, d = ?
   double d = (3 * 530.00) / sin(65.00 * (M_PI/180.0));
   //m2 = 2, λ2 = 700, θ2 = ?
   double result = (2 * 700.00) / d; //sin θ = mλ / d, we will store d in asin for getting the value.
   printf("Theta is : %.2f degrees\n", asin(result) * (180/M_PI));  // θ = asin(mλ/d)
}

int main() {
  solve();
  return 0;
}
