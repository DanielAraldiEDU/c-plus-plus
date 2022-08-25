#include <iostream>
#include "main.h"

using namespace std;

template <typename T>
T sumNumbers(T *numbers, int length)
{
  T sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += numbers[i];
  }

  return sum;
}

int main()
{
  int integers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  double doubles[] = {0.01, 1.02, 2.03, 3.04, 4.05, 5.06, 6.07, 7.08, 8.09, 9.10};

  int sumIntegers = sumNumbers<int>(integers, 10);
  double sumDoubles = sumNumbers<double>(doubles, 10);

  cout << "Soma do vetor de inteiros: " << sumIntegers << endl;
  cout << "Soma do vetor de doubles: " << sumDoubles << endl;

  return 0;
}