#include <iostream>
using namespace std;

unsigned int gcd(const unsigned int a, const unsigned int b){
  
  return (b == 0) ? a : gcd(b, a % b);

}

unsigned int lcm(const unsigned int a, const unsigned int b){

  return a * b / gcd(a, b);
  
}

int main(void){

  unsigned int a, b;
  cout << "input a, b:\n";
  cin >> a >> b;
  cout << "lcm(a,b)=" << lcm(a,b) << endl;
  
}
