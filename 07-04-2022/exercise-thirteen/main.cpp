#include <iostream>

using namespace std;

int main()
{
  float number;

  cout << "Digite um número real posivito:\n";

  do
  {
    cin >> number;

    if (number < 0)
    {
      cout << "Número inválido, tente novamente\n";
    }
  } while (number < 0);

  cout << "O número digitado é valido\n";

  return 0;
}