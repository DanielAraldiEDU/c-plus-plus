#include <iostream>
#include "main.h"

using namespace std;

int compare(const void *value, const void *valueToCompare)
{
  return (*(int *)value - *(int *)valueToCompare);
}

int main()
{
  int array[] = {40, 10, 100, 90, 20, 25};

  qsort(array, 6, sizeof(int), compare);

  for (int i = 0; i < 6; i++)
    cout << array[i] << " ";

  return 0;
}
