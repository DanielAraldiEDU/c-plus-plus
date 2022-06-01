#include <iostream>

using namespace std;

int main()
{
  float A[3][5], B[3][5], C[3][5];

  cout << "Digite os números para a matriz A:\n";

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> A[i][j];
    }
  }

  cout << "\nDigite os números para a matriz B:\n";

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> B[i][j];
    }
  }

  cout << "\nResultado da soma matricial:\n";

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      C[i][j] = A[i][j] + B[i][j];

      cout << C[i][j] << "\t";
    }

    cout << endl;
  }

  cout << "\nTodos os elementos da linha 2:\n";

  for (int i = 0; i < 5; i++)
  {
    cout << C[2][i] << endl;
  }

  cout << "\nTodos os elementos da coluna 3:\n";

  for (int i = 0; i < 3; i++)
  {
    cout << C[i][3] << endl;
  }

  return 0;
}