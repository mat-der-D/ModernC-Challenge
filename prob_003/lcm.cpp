#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

unsigned int gcd(const unsigned int a, const unsigned int b){
  
  return (b == 0) ? a : gcd(b, a % b);

}

unsigned int lcm(const unsigned int a, const unsigned int b){

  return a * b / gcd(a, b);
  
}

template<class InputIt>
unsigned int lcmr(InputIt first, InputIt last){
  return accumulate(first, last, 1, lcm);
}


int main(void){

  unsigned int inputNum;
  cout << "Input # of numbers:";
  cin >> inputNum;
  cout << "Input " << inputNum << " numbers:";
  vector<unsigned int> a(inputNum);
  for(int i = 0; i < inputNum; i++){
    cin >> a[i];
  }

  cout << lcmr(a.begin(), a.end()) << endl;
  
}
