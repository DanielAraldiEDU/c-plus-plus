#include <iostream>

using namespace std;

int main()
{
  float M[4][6], N[6][4], newMatrix[4][4], sum = 0;

  cout << "Digite um número para a matriz M:\n";

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      cin >> M[i][j];
    }
  }

  cout << "Digite um número para a matriz N:\n";

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> N[i][j];
    }
  }

  cout << endl;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      for (int k = 0; k < 4; k++)
      {
        sum += M[i][j] * N[j][i];
      }

      newMatrix[i][j] = sum;
      sum = 0;

      cout << newMatrix[i][j] << "\t";
    }

    cout << endl;
  }
}