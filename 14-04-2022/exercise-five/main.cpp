#include <iostream>

using namespace std;

int main()
{
  float number, smallerNumber;

  for (int i = 0; i < 20; i++)
  {
    cout << "Informe um número:\n";
    cin >> number;

    if (i == 0 || number < smallerNumber)
    {
      smallerNumber = number;
    }
  }

  cout << "O menor número é: " << smallerNumber;

  return 0;
}