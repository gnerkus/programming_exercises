#include <vector>
using namespace std;
// My solution
vector<int> quadratic(int a,int b){
// Answer in vector
  vector<int> coefficients;
  coefficients.push_back(1);
  coefficients.push_back(-1 * (a + b));
  coefficients.push_back(a * b);
  return coefficients;
}

/*
Best rated solution
vector<int> quadratic_best(int a, int b) {
  return { 1, - (a + b), a * b };
}
*/
