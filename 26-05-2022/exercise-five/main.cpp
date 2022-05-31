#include <iostream>

using namespace std;

int main()
{
  float A[4][6], B[6][4], C[4][4];

  cout << "Digite os números para a matriz A:\n";

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      cin >> A[i][j];
    }
  }

  cout << "\nDigite os números para a matriz B:\n";

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> B[i][j];
    }
  }

  cout << "\nResultado da soma matricial:\n";

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      C[i][j] = A[i][j] + B[i][j];

      cout << C[i][j] << "\t";
    }

    cout << endl;
  }

  return 0;
}