// re-try
#include <vector>
#include <iostream>

std::vector<unsigned long long> prime_factoring(unsigned long long num)
{
  std::vector<unsigned long long> factors(0);
  unsigned long long npower = 0;

  if(num % 2 == 0)
    factors.push_back(2);
  while(num % 2 == 0)
    {
      num /= 2;
      npower += 1;
    }
  if(npower >= 1)
    {
      factors.push_back(npower);
      npower = 0;
    }
  
  for(unsigned long long i = 3; i * i < num; i += 2)
    {
      if(num % i == 0)
	factors.push_back(i);		      
      while(num % i == 0)
	{
	  num /= i;
	  npower += 1;
	}
      if(npower >= 1)
	{
	  factors.push_back(npower);
	  npower = 0;
	}
    }
  
  if(num > 2)
    {
      factors.push_back(num);
      factors.push_back(1);
    }

  return factors;
}

int main()
{

  unsigned long long num = 0;
  std::cout << "Input some positive integer:" << std::endl;
  std::cin >> num;

  std::vector<unsigned long long> factor = prime_factoring(num);
  bool initial = true;
  for(unsigned int i = 0; i < factor.size(); i += 2)
    {
      if(!initial)
	std::cout << " * ";
      std::cout << factor[i];
      if(factor[i + 1] >= 2)
	std::cout << '^' << factor[i + 1];
      initial = false;
    }
  std::cout << std::endl;
  
  return 0;
}
