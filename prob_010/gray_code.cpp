#include <iostream>
#include <string>
#include <bitset>

unsigned int bin_to_gray(unsigned int const bin)
{
  return bin ^ (bin >> 1);
}

unsigned int gray_to_bin(unsigned int gray)
{
  for (unsigned int bit = 1U << 31; bit > 1; bit >>= 1)
    {
      if (gray & bit) gray ^= bit >> 1;
    }
  return gray;
}

std::string to_binary(unsigned int const value, int const digits)
{
  return std::bitset<32>(value).to_string().substr(32-digits, digits);
}

int main()
{
  std::cout << "Number\tBinary\tGray\tDecoded" << std::endl;
  std::cout << "------\t------\t----\t-------" << std::endl;

  for (unsigned int n = 0; n < 32; ++n)
    {
      auto encg = bin_to_gray(n);
      auto decg = gray_to_bin(encg);
      
      std::cout << n << "\t" << to_binary(n, 5) << "\t"
		<< to_binary(encg, 5) << "\t" << decg << std::endl;
    }
}
