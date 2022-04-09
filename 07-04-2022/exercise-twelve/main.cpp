#include <iostream>

using namespace std;

int main()
{
  int number, divide = 0;
  float media = 0, sum = 0;

  cout << "Para finalizar o programa, digite zero (0)\n";
  cout << "Digite um número inteiro:\n";

  do
  {
    cin >> number;

    sum += number;

    if (number != 0)
    {
      divide++;
    }
  } while (number != 0);

  if (sum == 0)
  {
    cout << "Resultado: " << sum;
  }
  else
  {
    media = sum / divide;

    cout << "Resultado: " << media;
  }

  return 0;
}