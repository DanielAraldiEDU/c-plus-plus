#include <iostream>

using namespace std;

int main()
{
  int number = 0;

  cout << "Informe um número inteiro:\n";
  cin >> number;

  if (number < 0)
  {
    number = -number;
    cout << "O número informado foi: " << number;
  }
  else
  {
    cout << "O número informado foi: " << number;
  }

  return 0;
}
