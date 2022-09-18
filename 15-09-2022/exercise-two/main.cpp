#include <iostream>
#include "main.h"

using namespace std;

int main()
{
  int numbers[LENGTH];
  int *number;

  // receive memory addresses of array
  number = numbers;
  // show memory addresses of array
  cout << number << endl;
  // show first index value of array
  cout << *number << endl;

  // assigns value to the default first index of array. Ex: [0]
  *number = 10;
  cout << number << endl;
  cout << *number << endl;

  // add more one position in the array index. Ex: [0] -> [1]
  number++;
  cout << number << endl;
  cout << *number << endl;

  *number = 20;
  cout << number << endl;
  cout << *number << endl;

  // receive memory addresses of array in [2] position
  number = &numbers[2];
  cout << number << endl;
  cout << *number << endl;

  *number = 30;
  cout << number << endl;
  cout << *number << endl;

  // receive memory addresses of array in [3] position
  number = numbers + 3;
  cout << number << endl;
  cout << *number << endl;

  *number = 40;
  cout << number << endl;
  cout << *number << endl;

  // receive memory addresses of array in [3] position
  number = numbers;
  cout << number << endl;
  cout << *number << endl;

  // receive memory addresses of array in [3] position. That's equivalent to the int numbers[4] = 50;
  *(number + 4) = 50;
  cout << number << endl;
  cout << *number << endl;

  for (int i = 0; i < LENGTH; i++)
  {
    if (i == LENGTH - 1)
      cout << numbers[i];
    else
      cout << numbers[i] << " - ";
  }

  return 0;
}