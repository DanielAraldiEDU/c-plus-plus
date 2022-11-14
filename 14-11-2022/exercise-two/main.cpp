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
T *handleInsertSort(T *array, int length)
{
  for (int index = 1; index < length; index++)
  {
    int value = array[index];
    int auxiliaryIndex = index - 1;

    while (auxiliaryIndex >= 0 && array[auxiliaryIndex] > value)
    {
      array[auxiliaryIndex + 1] = array[auxiliaryIndex];
      auxiliaryIndex = auxiliaryIndex - 1;
    }
    array[auxiliaryIndex + 1] = value;
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

  integers = handleInsertSort<int>(integers, LENGTH);
  printArray<int>(integers, LENGTH);

  cout << endl;
  cout << endl;

  doubles = handlePopulateArray<double>(doubles, LENGTH);
  printArray<double>(doubles, LENGTH);

  cout << endl;

  doubles = handleInsertSort<double>(doubles, LENGTH);
  printArray<double>(doubles, LENGTH);

  return 0;
}