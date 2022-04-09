#include <iostream>

using namespace std;

int main()
{
  int base, exponent, result = 1;

  cout << "Informe o número base\n";
  cin >> base;

  cout << "Informe o número expoente\n";
  cin >> exponent;

  if (base < 0 || exponent < 0)
  {
    cout << "Os números devem ser positivos\n";

    return 0;
  }
  else
  {
    for (int i = 0; i < exponent; i++)
    {
      result *= base;
    }

    cout << result;
  }

  return 0;
}