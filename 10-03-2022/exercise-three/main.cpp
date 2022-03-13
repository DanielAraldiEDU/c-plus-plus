#include <iostream>

using namespace std;

int main()
{
  float valuePerKilo, amount, result = 0;

  cout << "Informe o valor por quilo:\n";
  cin >> valuePerKilo;

  cout << "Informe a quantidade de quilos:\n";
  cin >> amount;

  result = valuePerKilo * amount;

  cout << "Metade do valor digitado: " << result;
  return 0;
}
