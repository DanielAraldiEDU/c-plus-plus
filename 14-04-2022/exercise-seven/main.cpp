#include <iostream>

using namespace std;

int main()
{
  int number, pair = 0, odd = 0;

  for (int i = 0; i < 20; i++)
  {
    cout << "Informe um número inteiro:\n";
    cin >> number;

    if (number % 2 == 0)
    {
      pair++;
    }
    else
    {
      odd++;
    }
  }

  cout << "Números pares: " << pair;
  cout << "Números ímpares: " << odd;

  return 0;
}