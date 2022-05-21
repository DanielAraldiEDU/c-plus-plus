#include <iostream>

using namespace std;

#define AMOUNT 5

int main()
{
  int headquarters[AMOUNT][AMOUNT];

  for (int i = 0; i < AMOUNT; i++)
  {
    for (int j = 0; j < AMOUNT; j++)
    {
      if (i == j)
      {
        headquarters[i][j] = 1;
      }
      else
      {
        headquarters[i][j] = 0;
      }

      cout << headquarters[i][j] << "\t";
    }

    cout << endl;
  }

  return 0;
}