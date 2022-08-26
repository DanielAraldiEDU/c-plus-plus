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

using Number = Numbers;

int main()
{
  Number number = Numbers::TEN;
  getNumber<Number>(number);
  return 0;
}