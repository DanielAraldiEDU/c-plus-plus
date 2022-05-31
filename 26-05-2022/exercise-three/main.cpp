#include <iostream>

using namespace std;

#define AMOUNT 4

int main()
{
  float matrix[AMOUNT][AMOUNT] = {}, maximumValue, minimumValue;
  int rowPosition, columnPosition;

  cout << "Digite os números da matriz:" << endl;

  for (int i = 0; i < AMOUNT; i++)
  {
    for (int j = 0; j < AMOUNT; j++)
    {
      cin >> matrix[i][j];

      if (matrix[i][j] > maximumValue)
      {
        maximumValue = matrix[i][j];
        rowPosition = i;
        columnPosition = j;

        for (int k = 0; k < AMOUNT; k++)
        {
          if (k == 0)
          {
            minimumValue = matrix[rowPosition][k];
          }

          if (matrix[rowPosition][k] < minimumValue)
          {
            minimumValue = matrix[rowPosition][k];
            columnPosition = k;
          }
        }
      }
    }
  }

  cout << "\nO valor minimax está na linha " << rowPosition << " e na coluna " << columnPosition;

  return 0;
}