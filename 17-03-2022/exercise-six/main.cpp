#include <iostream>

using namespace std;

int main()
{
  int number = 0;

  cout << "Entre com um número inteiro:\n";
  cin >> number;

  if (number % 2 == 0)
  {
    cout << "Número é par";
  }
  else
  {
    cout << "Número é ímpar:\n";
  }

  return 0;
}
