#include <iostream>
#include "./main.h"

using namespace std;

int getStaticValue(int staticValue = 1)
{
  return staticValue;
}

bool checkIfIsPair(int number)
{
  return number % 2 == 0 ? true : false;
}

bool checkIfIsPrime(int number)
{
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
      return false;
  }
  return true;
}

void read(int value)
{
  cout << "Value: " << value << endl;
}

void changeNumberByReferente(int &number)
{
  number++;
}

int main()
{
  int staticValue = getStaticValue(115);

  read(staticValue);

  changeNumberByReferente(staticValue);

  bool isPair = checkIfIsPair(staticValue);
  bool isPrime = checkIfIsPrime(staticValue);

  cout << "Memory position of the static value: " << &staticValue << endl;
  cout << "Static value: " << staticValue << endl;
  cout << "It's pair? " << (isPair ? "true" : "false") << endl;
  cout << "It's prime? " << (isPrime ? "true" : "false") << endl;

  return 0;
}