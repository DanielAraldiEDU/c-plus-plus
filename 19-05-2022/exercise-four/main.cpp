#include <iostream>

using namespace std;

#define AMOUNT 5

int main()
{
  int matrix[AMOUNT][AMOUNT];

  for (int i = 0; i < AMOUNT; i++)
  {
    for (int j = 0; j < AMOUNT; j++)
    {
      if (i > j)
      {
        matrix[i][j] = 1;
      }
      else
      {
        matrix[i][j] = 0;
      }

      cout << matrix[i][j] << "\t";
    }

    cout << endl;
  }

  return 0;
}