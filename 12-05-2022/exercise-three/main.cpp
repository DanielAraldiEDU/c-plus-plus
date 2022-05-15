#include <iostream>

using namespace std;

int main()
{
  int numbers[30] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
  int oddNumbers[30], pairNumbers[30], oddSum = 0, pairSum = 0;

  for (int i = 0; i < 30; i++)
  {
    pairNumbers[i] = 0;
    oddNumbers[i] = 0;

    if (i % 2 == 0)
    {
      pairNumbers[i] = numbers[i];
    }
    else
    {
      oddNumbers[i] = numbers[i];
    }

    oddSum += oddNumbers[i];
    pairSum += pairNumbers[i];
  }

  if (oddSum == pairSum)
  {
    cout << "Resultado de todos os números pares: " << pairSum;
    cout << "Resultado de todos os números ímpares: " << oddSum;
  }
  else if (oddSum > pairSum)
  {
    cout << "Resultado de todos os números ímpares: " << oddSum;
  }
  else
  {
    cout << "Resultado de todos os números pares: " << pairSum;
  }
}