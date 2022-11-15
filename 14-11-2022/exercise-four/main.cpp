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
int handleSplitTheArray(T *array, int start, int end)
{
  T pivot = array[end];
  int greaterElement = (start - 1);

  for (int j = start; j < end; j++)
  {
    if (array[j] <= pivot)
    {
      greaterElement++;
      handleSwapArrayElement(&array[greaterElement], &array[j]);
    }
  }

  handleSwapArrayElement(&array[greaterElement + 1], &array[end]);

  return (greaterElement + 1);
}

template <typename T>
T *handleQuickSort(T *array, int start, int end)
{
  if (start >= end)
    return array;

  int index = handleSplitTheArray(array, start, end);
  handleQuickSort(array, start, index - 1);
  handleQuickSort(array, index + 1, end);
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

  integers = handleQuickSort<int>(integers, 0, 9);
  printArray<int>(integers, LENGTH);

  cout << endl;
  cout << endl;

  doubles = handlePopulateArray<double>(doubles, LENGTH);
  printArray<double>(doubles, LENGTH);

  cout << endl;

  doubles = handleQuickSort<double>(doubles, 0, 9);
  printArray<double>(doubles, LENGTH);

  return 0;
}