#include <iostream>

using namespace std;

int main()
{
  int A[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  int B[8] = {9, 10, 11, 12, 13, 14, 15, 16};
  int auxiliarValue;

  for (int i = 0; i < 8; i++)
  {
    auxiliarValue = A[i];
    A[i] = B[i];
    B[i] = auxiliarValue;
  }

  cout << "Valor do array A:" << endl;

  for (int i = 0; i < 8; i++)
  {
    cout << A[i];
  }

  cout << "\nValor do array B:" << endl;

  for (int i = 0; i < 8; i++)
  {
    cout << B[i];
  }

  return 0;
}