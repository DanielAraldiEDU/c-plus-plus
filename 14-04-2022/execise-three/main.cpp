#include <iostream>

using namespace std;

int main()
{
  int number;
  float sum = 0;

  cout << "Informe um inteiro número:\n";
  cin >> number;

  for (float i = 1; i <= number; i++)
  {
    sum = sum + 1 / i;
  }

  cout << "Resultado: " << sum;

  return 0;
}