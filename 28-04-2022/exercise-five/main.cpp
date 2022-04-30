#include <iostream>

using namespace std;

#define AMOUNT 20

int main()
{
  int A[AMOUNT] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
  int B[AMOUNT] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int C[AMOUNT];

  for (int i = 0; i < AMOUNT; i++)
  {
    C[i] = A[i] - B[i];
  }

  for (int i = 0; i < AMOUNT; i++)
  {
    cout << C[i] << " ";
  }

  return 0;
}