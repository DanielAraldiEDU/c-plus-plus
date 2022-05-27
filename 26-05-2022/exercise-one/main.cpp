#include <iostream>

using namespace std;

#define AMOUNT 4

int main()
{
  float matrix[AMOUNT][AMOUNT], numbers[AMOUNT], sum;

  for (int i = 0; i < AMOUNT; i++)
  {
    for (int j = 0; j < AMOUNT; j++)
    {
      cout << "Digite um número real:\n";
      cin >> matrix[i][j];

      sum += matrix[i][j];
    }

    numbers[i] = sum;
  }

  for (int i = 0; i < AMOUNT; i++)
  {
    for (int j = 0; j < AMOUNT; j++)
    {
      matrix[i][j] *= numbers[i];
      cout << matrix[i][j] << "\t";
    }

    cout << endl;
  }

  return 0;
}