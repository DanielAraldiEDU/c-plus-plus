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
void handleSwapArrayElement(T *elementForExchange, T *element)
{
  T value = *elementForExchange;
  *elementForExchange = *element;
  *element = value;
}

template <typename T>
T *handleSelectionSort(T *array, int length)
{
  int minimumIndex, auxiliaryIndex;

  for (int index = 0; index < length - 1; index++)
  {
    minimumIndex = index;
    for (auxiliaryIndex = index + 1; auxiliaryIndex < length; auxiliaryIndex++)
      if (array[auxiliaryIndex] < array[minimumIndex])
        minimumIndex = auxiliaryIndex;

    if (minimumIndex != index)
      handleSwapArrayElement<T>(&array[minimumIndex], &array[index]);
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

  integers = handleSelectionSort<int>(integers, LENGTH);
  printArray<int>(integers, LENGTH);

  cout << endl;
  cout << endl;

  doubles = handlePopulateArray<double>(doubles, LENGTH);
  printArray<double>(doubles, LENGTH);

  cout << endl;

  doubles = handleSelectionSort<double>(doubles, LENGTH);
  printArray<double>(doubles, LENGTH);

  return 0;
}