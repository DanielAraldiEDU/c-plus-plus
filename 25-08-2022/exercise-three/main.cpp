#include <iostream>
#include "main.h"

using namespace std;

enum Numbers
{
  ZERO,
  ONE,
  TWO,
  NINE = 9,
  TEN = 10
};

template <typename T>
void getNumber(T number)
{
  cout << number;
}

int main()
{
  Numbers number = Numbers::TEN;
  getNumber<Numbers>(number);
  return 0;
}