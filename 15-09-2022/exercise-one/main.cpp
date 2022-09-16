#include <iostream>

using namespace std;

int main()
{
  int number = 10;
  // **auto** type is any type
  auto *pointer = &number;

  int auxiliar = *pointer;
  auxiliar += 1000;
  *pointer = auxiliar;

  cout << number << endl;
  cout << *pointer << endl;

  number *= number;
  *pointer += *pointer;

  cout << number << endl;
  cout << pointer << endl;
  cout << *pointer << endl;

  return 0;
}