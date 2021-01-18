#include <iostream>
using namespace std;

int main () {
  double r,a;
  double pi = 3.14159;
  cin >> r;
  a = pi * (r * r);
  cout << fixed;
  cout.precision(4);
  cout << "A=" << a << endl;
  
  return 0;
}