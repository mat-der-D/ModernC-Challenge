#include <iostream>

using namespace std;

// *** definition by the textbook ***
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

// *** my definition ***
// bool is_prime(long long int const num)
// {
//   if (num <= 1)
//     {
//       return false;
//     }
//   for (long long int i = 2; i * i <= num; i++)
//     {
//       if (num % i == 0)
// 	{
// 	  return false;
// 	}
//     }
//   return true;
// }

long long int largest_prime_next_to(long long int const num)
{
  for(long long int i = num - 1; i >= 2; --i)
    {
      if(is_prime(i))
	{
	  return i;
	}
    }
  
  return -1;
}


int main()
{
  long long int limit;
  cout << "Input an integer:" << endl;
  cin >> limit;
  long long int const prime = largest_prime_next_to(limit);
  if(prime == -1)
    {
      cout << "No prime less than " << limit << " exists." << endl;
    }
  else
    {
      cout << "The largest prime next to " << limit << " is "
  	   << prime << '.' << endl;
    }
  // cout << is_prime(limit) << endl;
  
  return 0;
}
