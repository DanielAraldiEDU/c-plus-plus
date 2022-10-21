#include <iostream>
#include "main.h"

using namespace std;

int potency(int base, int exponent)
{
  return exponent == 1 ? base : base * potency(base, exponent - 1);
}

int main()
{
  const int base = 2;
  const int exponent = 3;

  const int potencyNumber = potency(base, exponent);

  cout << "Potency: " << potencyNumber;

  return 0;
}