#include <iostream>

using namespace std;

int main()
{
  int factorialNumber;

  cout << "Informe um número inteiro\n";
  cin >> factorialNumber;

  for (int i = factorialNumber - 1; i > 0; i--)
  {
    if (factorialNumber == 1 || factorialNumber == 0)
    {
      factorialNumber = 1;
    }
    else
    {
      factorialNumber *= i;
    }
  }

  cout << "Resultado: " << factorialNumber;

  return 0;
}