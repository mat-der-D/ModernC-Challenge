#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  unsigned int limit = 0;
  cout << "Upper limit:";
  cin >> limit;

  unsigned long long int sum = 0;
  for (unsigned int i = 3; i < limit; ++i)
    {
      if (i % 3 == 0 || i % 5 == 0)
	sum += i;
    }

  cout << "sum=" << sum << endl;
  
}
