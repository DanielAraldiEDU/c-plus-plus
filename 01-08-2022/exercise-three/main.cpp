#include <iostream>

using namespace std;

int main()
{
  float point, sum = 0;

  for (int i = 0; i < 4; i++)
  {
    cout << "Digite sua nota:\n";
    cin >> point;

    sum += point;
  }

  cout << "A média do aluno é: " << sum / 4;

  return 0;
}