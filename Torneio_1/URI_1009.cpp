#include <iostream>
using namespace std;

int main() {
  string a;
  double b, c, st;  
  cin >> a;
  cin >> b >> c;
  st = (c * 0.15) + b; 
  cout << fixed;
  cout.precision(2);
  cout << "TOTAL = R$ " <<  st << endl;

return 0;
}