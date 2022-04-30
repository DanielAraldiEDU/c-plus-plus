#include <iostream>

using namespace std;

#define AMOUNT 10

int main()
{
  int numbers[AMOUNT] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int number;

  for (int i = AMOUNT - 1, j = 0; i > AMOUNT / 2; i--, j++)
  {
    number = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = number;
  }

  for (int i = 0; i < AMOUNT; i++)
  {
    cout << numbers[i] << " ";
  }

  return 0;
}