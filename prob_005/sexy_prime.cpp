#include <iostream>
using namespace std;

bool is_prime(long long int const num)
{
  if (num <= 3)
    {
      return num > 1;
    }
  else if (num % 2 == 0 || num % 3 == 0)
    {
      return false;
    }
  else
    {
      for (long long int i = 5; i * i <= num; i += 6)
	{
	  if (num % i == 0 || num % (i + 2) == 0)
	    {
	      return false;
	    }
	}
    }
  return true;
}

int main()
{
  bool flag = false;
  long long int limit = 0;
  cout << "Input an integer:" << endl;
  cin >> limit;

  for(long long int i = 5; i <= limit - 6; i += 2)
    {
      if(is_prime(i) && is_prime(i + 6))
	{
	  if(flag)
	    {
	      cout << ',';
	    }
	  cout << '(' << i << ',' << i + 6 << ')';
	  flag = true;
	}
    }
  if(flag)
    {
      cout << endl;
    }
  return 0;
}
