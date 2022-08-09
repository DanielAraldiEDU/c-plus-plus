#include <iostream>
#include "./main.h"

using namespace std;

#define LENGTH 10

int getBiggestNumber(int array[10])
{
  int biggestNumber = array[0];

  for (int i = 0; i < LENGTH; i++)
  {
    if (array[i] > biggestNumber)
    {
      biggestNumber = array[i];
    }
  }

  return biggestNumber;
}

int getSmallestNumber(int array[10])
{
  int smallestNumber = array[0];

  for (int i = 0; i < LENGTH; i++)
  {
    if (array[i] < smallestNumber)
    {
      smallestNumber = array[i];
    }
  }

  return smallestNumber;
}

bool isGrowing(int array[10])
{
  for (int i = 0; i < LENGTH; i++)
  {
    if (array[i] > array[i + 1])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int array[LENGTH] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  int biggestNumber = getBiggestNumber(array);
  int smallestNumber = getSmallestNumber(array);
  bool isGrowingValues = isGrowing(array);

  cout << "Biggest number: " << biggestNumber << endl;
  cout << "Smallest number: " << smallestNumber << endl;
  cout << "Is growing: " << (isGrowingValues ? "true" : "false") << endl;

  return 0;
}
