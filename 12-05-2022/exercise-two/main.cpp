#include <iostream>

using namespace std;

int main()
{
  int numbers[5], reverseNumbers[5];

  cout << "Digite 5 números inteiros:\n";

  for (int i = 0; i < 5; i++)
  {
    cin >> numbers[i];
  }

  for (int i = 4, j = 0; i >= 0; i--, j++)
  {
    reverseNumbers[j] = numbers[i];
  }

  cout << "O valor do array inveritdo: ";

  for (int i = 0; i < 5; i++)
  {
    cout << reverseNumbers[i];
  }

  return 0;
}