#include <iostream>

using namespace std;

int *integersValues(int length, int number)
{
  int *pointer = new int[length];

  for (int i = 0; i < length; i++)
    pointer[i] = number * i;

  return pointer;
}

int main()
{
  int *integers;

  integers = integersValues(10, 10);

  for (int i = 0; i < 10; i++)
    cout << integers[i] << endl;

  return 0;
}