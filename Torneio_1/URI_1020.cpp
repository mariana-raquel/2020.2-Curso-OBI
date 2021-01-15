#include <iostream>
using namespace std;
 
int main() {
  int e, a, m, d;  
  cin >> e;
  a = e / 365;
  m = (e - (a * 365)) / 30;
  d = e - (a * 365) - (m * 30);
      
  cout << a << " ano(s)" << endl;
  cout << m << " mes(es)" << endl;
  cout << d << " dia(s)" << endl;
 
return 0;
}