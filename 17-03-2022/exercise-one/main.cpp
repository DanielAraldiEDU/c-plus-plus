#include <iostream>

using namespace std;

int main()
{
  int numberA, numberB, supportValue = 0;

  cout << "Informe o valor da variável A:\n";
  cin >> numberA;

  cout << "Informe o valor da variável B:\n";
  cin >> numberB;

  supportValue = numberA;

  numberA = numberB;
  numberB = supportValue;

  cout << "Informe o valor da variável A é: " << numberA;
  cout << "\nInforme o valor da variável B é: " << numberB;

  return 0;
}
