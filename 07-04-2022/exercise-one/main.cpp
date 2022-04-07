#include <iostream>

using namespace std;

int main()
{
  int numberOne, numberTwo;

  cout << "Digite dois números reais:\n";
  cin >> numberOne >> numberTwo;

  if (numberOne == numberTwo)
  {
    cout << "Eles são iguais";
  }
  else
  {
    if (numberOne > numberTwo)
    {
      cout << numberOne << " é maior";
    }
    else
    {
      cout << numberTwo << " é maior";
    }
  }
}