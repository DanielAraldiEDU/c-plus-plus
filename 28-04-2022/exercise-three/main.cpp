#include <iostream>

using namespace std;

#define AMOUNT 5

int main()
{
  int numbers[AMOUNT] = {1, 1, 0, 3, 5};
  int smallestFirstIndex = 0, higherFirstIndex = 0, equalFirstIndex = 0;

  for (int i = 0; i < AMOUNT; i++)
  {
    if (numbers[0] == numbers[i])
    {
      equalFirstIndex++;
    }

    if (numbers[0] < numbers[i])
    {
      smallestFirstIndex++;
    }

    if (numbers[0] > numbers[i])
    {
      higherFirstIndex++;
    }
  }

  cout << "\nQuantidade de elementos iguais ao primero index: " << equalFirstIndex;
  cout << "\nQuantidade de elementos maiores ao primero index: " << higherFirstIndex;
  cout << "\nQuantidade de elementos menores ao primero index: " << smallestFirstIndex;

  return 0;
}