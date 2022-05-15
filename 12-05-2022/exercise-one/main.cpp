#include <iostream>

using namespace std;

int main()
{
  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int smallestNumber, higherNumber;

  for (int i = 0; i < 10; i++)
  {
    if (i == 0 || numbers[i] < smallestNumber)
    {
      smallestNumber = numbers[i];
    }

    if (i == 0 || numbers[i] > higherNumber)
    {
      higherNumber = numbers[i];
    }
  }

  for (int i = smallestNumber - 1; i > 0; i--)
  {
    if (smallestNumber == 1 || smallestNumber == 0)
    {
      smallestNumber = 1;
    }
    else
    {
      smallestNumber *= i;
    }
  }

  for (int i = higherNumber - 1; i > 0; i--)
  {
    if (higherNumber == 1 || higherNumber == 0)
    {
      higherNumber = 1;
    }
    else
    {
      higherNumber *= i;
    }
  }

  cout << "Fatorial do menor número: " << smallestNumber << endl;
  cout << "Fatorial do maior número: " << higherNumber << endl;

  return 0;
}