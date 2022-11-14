#include <iostream>
#include <time.h>
#include <math.h>
#include "main.h"

using namespace std;

template <typename T>
T createRandomNumber(T number)
{
  return fmod(rand(), number);
}

template <typename T>
T *handleBubbleSort(T *array, int length)
{
  bool itsOrdered = false;
  int auxiliaryIndex = 0, highestIntegerValue;
  while (!itsOrdered)
  {
    itsOrdered = true;
    auxiliaryIndex++;
    for (int index = 0; index < length - auxiliaryIndex; index++)
    {
      if (array[index] > array[index + 1])
      {
        highestIntegerValue = array[index];
        array[index] = array[index + 1];
        array[index + 1] = highestIntegerValue;
        itsOrdered = false;
      }
    }
  }

  return array;
}

template <typename T>
T *handlePopulateArray(T *array, int length)
{
  for (int i = 0; i < length; i++)
    array[i] = createRandomNumber<T>(100);
  return array;
}

template <typename T>
void printArray(T *array, int length)
{
  for (int i = 0; i < length; i++)
    i + 1 == length ? cout << array[i] : cout << array[i] << " ";
}

int main()
{
  srand(time(NULL));

  int *integers = new int[LENGTH];
  double *doubles = new double[LENGTH];

  integers = handlePopulateArray<int>(integers, LENGTH);
  printArray<int>(integers, LENGTH);

  cout << endl;

  integers = handleBubbleSort<int>(integers, LENGTH);
  printArray<int>(integers, LENGTH);

  cout << endl;
  cout << endl;

  doubles = handlePopulateArray<double>(doubles, LENGTH);
  printArray<double>(doubles, LENGTH);

  cout << endl;

  doubles = handleBubbleSort<double>(doubles, LENGTH);
  printArray<double>(doubles, LENGTH);

  return 0;
}