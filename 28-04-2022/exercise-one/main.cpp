#include <iostream>

using namespace std;

#define AMOUNT 10

int main()
{
  int numbers[AMOUNT] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int smallestNumber, higherNumber;
  float media = 0, sum = 0;

  for (int i = 0; i < AMOUNT; i++)
  {
    if (i == 0 || numbers[i] < smallestNumber)
    {
      smallestNumber = numbers[i];
    }

    if (i == 0 || numbers[i] > higherNumber)
    {
      higherNumber = numbers[i];
    }

    sum += numbers[i];
  }

  media = sum / AMOUNT;

  cout << "\nO menor número é: " << smallestNumber;
  cout << "\nO maior número é: " << higherNumber;
  cout << "\nA média dos valores é: " << media;

  return 0;
}