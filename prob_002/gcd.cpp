#include <iostream>
using namespace std;

unsigned int gcd(const unsigned int a, const unsigned int b){
  return (b == 0) ? a : gcd(b, a % b);
}

int main(){

  unsigned int a, b;
  cout << "input a, b:\n";
  cin >> a >> b;
  cout << "gcd(a,b)=" << gcd(a,b) << endl;
  
  return 0;
}
