#include <iostream>
#include <vector>
#include <cmath>

std::vector<unsigned long long> prime_factors(unsigned long long n)
{
  std::vector<unsigned long long> factors;
  while(n % 2 == 0)
    {
      factors.push_back(2);
      n = n / 2;
    }

  for (unsigned long long i = 3; i * i <= n; i += 2)
    {
      while(n % i == 0)
	{
	  factors.push_back(i);
	  n = n / i;
	}
    }

  if (n > 2)
    factors.push_back(n);
  return factors;
}


int main(){

  unsigned long long num;
  std::cout << "Input an integer:" << std::endl;
  std::cin >> num;
  std::vector<unsigned long long> factor = prime_factors(num);

  bool flag = false;
  for(int i = 0; i < factor.size(); i++)
    {
      if(flag)
	std::cout << '*';
      std::cout << factor[i];
      flag = true;
    }
  std::cout << std::endl;
  
  return 0;
}
