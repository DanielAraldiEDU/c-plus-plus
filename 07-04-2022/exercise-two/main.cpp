#include <iostream>

using namespace std;

int main()
{
  int number;

  cout << "Digite um número inteiro:\n";
  cin >> number;

  if (number == 0)
  {
    cout << "Ele é igual a zero";
  }
  else if (number > 0)
  {
    cout << "Ele é positivo";
  }
  else
  {
    cout << "Ele é negativo";
  }

  return 0;
}