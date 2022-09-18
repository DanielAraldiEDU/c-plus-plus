#include <iostream>

using namespace std;

int main()
{
  int number = 0;
  int *numberOnePointer = &number;
  int *numberTwoPointer = &number;

  cout << "Enter an integer number: ";
  cin >> number;

  cout << "Number: " << number << endl;
  cout << "First pointer of number: " << *numberOnePointer << endl;
  cout << "Secound pointer of number: " << *numberTwoPointer << endl;

  return 0;
}