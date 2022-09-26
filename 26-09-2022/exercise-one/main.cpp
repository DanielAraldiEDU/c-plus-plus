#include <iostream>
#include "main.h"

using namespace std;

void logger(int **matrix, int length)
{
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int *array = new int[3];
  array[0] = 1;
  array[1] = 2;
  array[2] = 3;

  int **matrix = new int *[3];
  matrix[0] = array;
  matrix[1] = array;
  matrix[2] = array;

  logger(matrix, 3);

  return 0;
}