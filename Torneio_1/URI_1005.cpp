#include <iostream>
using namespace std;
 
int main() {
  float a, b;
  double m;
  cin >> a >> b;
  m = ((a * 3.5) + (b * 7.5)) / 11;
  cout << fixed;
  cout.precision(5);
  cout << "MEDIA = "<< m << endl;
 
return 0;
}