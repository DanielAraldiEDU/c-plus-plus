#include <iostream>

using namespace std;

int main()
{
  int predecessorNumber = 1, currentNumber = 1, nextNumber, result;

  for (int i = 0; i < 20; i++)
  {
    if (i < 2)
    {
      cout << " " << currentNumber;
    }
    else
    {
      nextNumber = predecessorNumber + currentNumber;
      cout << " " << nextNumber;
      predecessorNumber = currentNumber;
      currentNumber = nextNumber;
    }
  }

  return 0;
}