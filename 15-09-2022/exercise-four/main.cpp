#include <iostream>
#include "main.h"

using namespace std;

void memory(auto position)
{
  cout << "Memory position: " << position << endl;
}

void logger(int numbers[LENGTH])
{
  for (int i = 0; i < LENGTH; i++)
  {
    if (i == LENGTH - 1)
      cout << numbers[i];
    else
      cout << numbers[i] << " - ";
  }
}

int *powNumbers(int numbers[LENGTH])
{
  for (int i = 0; i < LENGTH; i++)
  {
    auto *pointer = (&numbers)[i];
    numbers[i] *= numbers[i];
    memory(pointer);
  }

  return numbers;
}

int main()
{
  int numbers[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *numbersPointer = numbers;

  numbersPointer = powNumbers(numbers);

  logger(numbersPointer);

  return 0;
}