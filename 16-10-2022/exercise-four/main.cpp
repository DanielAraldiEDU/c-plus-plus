#include <iostream>
#include "main.h"

using namespace std;

float sumNumbers(float numbers[10], int length)
{
  return !length ? 0 : numbers[length - 1] + sumNumbers(numbers, length - 1);
}

int main()
{
  float numbers[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

  const float sum = sumNumbers(numbers, 10);

  cout << "Sum Numbers: " << sum;

  return 0;
}