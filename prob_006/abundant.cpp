#include <iostream>
using namespace std;

long long int sum_of_divisors(long long int const num)
{
  long long int sum = 0;
  for(long long int i = 1; i <= num; i++)
    {
      if(num % i == 0)
	{
	  sum += i;
	}
    }
  return sum;
}

bool is_abundant(long long int const num)
{
  return num < sum_of_divisors(num);
}

long long int abundance(long long int const num)
{
  return sum_of_divisors(num) - num;
}


int main()
{
  long long int limit = 0;
  cout << "Input an integer:" << endl;
  cin >> limit;

  for(long long int i = 1; i <= limit; i++)
    {
      if(is_abundant(i))
  	{
  	  cout << i << ',' << abundance(i) << endl;
  	}
    }
  
  return 0;
}
