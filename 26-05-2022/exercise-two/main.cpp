#include <iostream>

using namespace std;

int main()
{
  float M[4][6], N[6][4], newMatrix[4][4], sum = 0;

  cout << "Digite os números para a matriz M:\n";

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      cin >> M[i][j];
    }
  }

  cout << "\nDigite os números para a matriz N:\n";

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> N[i][j];
    }
  }

  cout << "\nResultado da soma matricial:\n";

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      sum = 0;
      for (int k = 0; k < 6; k++)
      {
        sum += M[i][k] * N[k][j];
      }
      newMatrix[i][j] = sum;

      cout << newMatrix[i][j] << "\t";
    }

    cout << endl;
  }
}