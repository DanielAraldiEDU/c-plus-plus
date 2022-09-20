#include <iostream>

using namespace std;

int main()
{
  int values;
  int *pointer;
  cout << "Quantos valores você quer digitar? ";
  cin >> values;

  pointer = new int[values];

  for (int i = 0; i < values; i++)
  {
    cout << "Digite um valor: ";
    cin >> pointer[i];
  }

  cout << "Você digitou: ";
  for (int i = 0; i < values; i++)
    i == (values - 1) ? cout << pointer[i] << endl : cerr << pointer[i] << ", ";

  delete[] pointer;

  return 0;
}