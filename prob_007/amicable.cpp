#include <iostream>
using namespace std;

long long int sum_of_divisors(long long int const num)
{
  long long int sum = 0;
  for(long long int i = 1; i * i <=num; i++)
    {
      if(num % i == 0)
	{
	  sum += i;
	  if(i * i != num)
	    {
	      sum += num / i;
	    }
	}
    }
  return sum;
}

long long int sum_of_divisors_2(long long int const num)
{
  return sum_of_divisors(num) - num;
}

long long int sum_proper_divisors(long long int const num)
{
  long long int sum = 1;
  for(long long int i = 2; i * i <= num; i++)
    {
      if(num % i == 0)
	{
	  sum += i;
	  if(i * i != num)
	    {
	      sum += num / i;
	    }
	}
    }
  return sum;
}


int main()
{
  long long int limit = 0;
  cout << "Input an integer:" << endl;
  cin >> limit;

  for(long long int i = 1; i <= limit; i++)
    {
      // long long int j = sum_of_divisors_2(i);
      long long int j = sum_proper_divisors(i);
      // if(i < j && j < limit && i == sum_of_divisors_2(j))
      if(i < j && j < limit && i == sum_proper_divisors(j))
	{
	  cout << '(' <<  i << ',' << j << ')' << endl;
	}
    }
  
  return 0;
}
