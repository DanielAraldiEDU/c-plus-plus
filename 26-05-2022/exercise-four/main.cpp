#include <iostream>

using namespace std;

#define AMOUNT 5

int main()
{
  float matrix[AMOUNT][AMOUNT] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25}, sum = 0;

  for (int i = 0; i < AMOUNT; i++)
  {
    for (int j = 0; j < AMOUNT; j++)
    {
      sum += matrix[i][j];
    }
  }

  cout << "Soma de todos os valores da matrix: " << sum << endl;

  return 0;
}