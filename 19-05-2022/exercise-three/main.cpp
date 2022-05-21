#include <iostream>

using namespace std;

#define AMOUNT 5

int main()
{
  float initialMatrix[AMOUNT][AMOUNT], alteredMatrix[AMOUNT][AMOUNT];

  for (int i = 0; i < AMOUNT; i++)
  {
    for (int j = 0; j < AMOUNT; j++)
    {
      cout << "Digite um número real:" << endl;
      cin >> initialMatrix[i][j];

      alteredMatrix[i][j] = initialMatrix[i][j];

      if (initialMatrix[i][j] > 100)
      {
        alteredMatrix[i][j] = 0;
      }
      else
      {
        alteredMatrix[i][j] = initialMatrix[i][j];
      }
    }
  }

  cout << "Matrix inicial:" << endl;

  for (int i = 0; i < AMOUNT; i++)
  {
    for (int j = 0; j < AMOUNT; j++)
    {
      cout << initialMatrix[i][j] << "\t";
    }

    cout << endl;
  }

  cout << "Matrix alterada:" << endl;

  for (int i = 0; i < AMOUNT; i++)
  {
    for (int j = 0; j < AMOUNT; j++)
    {
      cout << alteredMatrix[i][j] << "\t";
    }

    cout << endl;
  }

  return 0;
}