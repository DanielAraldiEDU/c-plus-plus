#include <iostream>

using namespace std;

int main()
{
  float weight, smallerWeight, biggestWeight;

  for (int i = 0; i < 25; i++)
  {
    cout << "Informe um peso:\n";
    cin >> weight;

    if (i == 0 || weight < smallerWeight)
    {
      smallerWeight = weight;
    }

    if (i == 0 || weight > biggestWeight)
    {
      biggestWeight = weight;
    }
  }

  cout << "O menor número é: " << smallerWeight;
  cout << "O maior número é: " << biggestWeight;

  return 0;
}