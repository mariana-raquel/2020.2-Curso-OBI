#include <iostream>
using namespace std;
 
int main() {
  double a, b, c;  
  cin >> a >> b;
  c = a / b;
  cout << fixed;
  cout.precision(3);
  cout << c << " km/l" << endl;
     
return 0;
}