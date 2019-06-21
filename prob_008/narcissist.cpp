#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <math.h>
using namespace std;

int digit(long long int const num)
{
  if(num == 0)
    {
      return 0;
    }
  else
    {
      return digit(num / 10) + 1;
    }
}

bool is_narcissist(long long int const num)
{
  const int d = digit(num);
  long long int num_tmp = num;
  vector<int> a(d); // numbers in each digit
  for(int i = 0; i < d; i++)
    {
      a[i] = num_tmp % 10;
      num_tmp = (num_tmp - a[i]) / 10;
    }
  vector<int> b(d);
  for(int i = 0; i < d; i++)
    {
      b[i] = pow(a[i], d);
    }
  return num == accumulate(b.begin(),b.end(),0);
}


int main(){

  for(int num = 100; num < 1000; num++)
    {
      if(is_narcissist(num))
	{
	  cout << num << endl;
	}
    }
  
  return 0;
}
