#include <iostream>

using namespace std;

int main()
{
  float numberOne, numberTwo, numberThree;

  cout << "Digite três números reais:\n";
  cin >> numberOne >> numberTwo >> numberThree;

  if (numberOne < numberTwo && numberTwo < numberThree)
  {
    cout << numberOne;
  }
  else
  {
    if (numberTwo < numberOne && numberTwo < numberThree)
    {
      cout << numberTwo;
    }
    else
    {
      if (numberThree < numberOne && numberThree < numberTwo)
      {
        cout << numberThree;
      }
    }
  }

  return 0;
}