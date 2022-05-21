#include <iostream>

using namespace std;

#define AMOUNT 4

int main()
{
  int matrix[AMOUNT][AMOUNT] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  int sum = 0;

  for (int i = 0; i < AMOUNT; i++)
  {
    for (int j = 0; j < AMOUNT; j++)
    {
      if (i == j)
      {
        sum += matrix[i][j];
      }
    }
  }

  cout << "Soma dos valores da diagonal da matrix: " << sum;

  return 0;
}