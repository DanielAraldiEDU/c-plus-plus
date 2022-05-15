#include <iostream>

using namespace std;

int main()
{
  int numbers[5], amountOfTheSevenNumbers = 0;

  cout << "Digite cinco (5) números inteiros:" << endl;

  for (int i = 0; i < 5; i++)
  {
    cin >> numbers[i];

    if (numbers[i] == 7)
    {
      amountOfTheSevenNumbers++;
    }
  }

  for (int i = 0; i < 5; i++)
  {
    if (numbers[i] == 7)
    {
      cout << "O número sete (7) foi encontrado na posição: " << i << " do array\n";
    }
  }

  cout << "Quantidade de números sete (7): " << amountOfTheSevenNumbers;

  return 0;
}