#include <iostream>
#include "main.h"

using namespace std;

int factorial(int number)
{
  if (number <= 1)
    return 1;
  else
    return number * factorial(number - 1);
}

int fibonacci(int number)
{
  if (number == 0)
  {
    return 0;
  }
  else
  {
    if (number == 1)
      return 1;

    return fibonacci(number - 1) + fibonacci(number - 2);
  }
}

int main()
{
  const int numberFactorial = factorial(5);
  const int numberFibonacci = fibonacci(15);

  cout << "Factorial: " << numberFactorial << endl;
  cout << "Fibonacci: " << numberFibonacci << endl;

  return 0;
}