#include <iostream>

using namespace std;

int main()
{
  float weight, excess, penalty;

  cout << "Digite o peso do peixe:\n";
  cin >> weight;

  if (weight > 50)
  {
    excess = weight - 50;
    penalty = excess * 4;

    cout << "Você excedeu o peso do peixe, pague: R$ " << penalty << " reais";
  }
  else
  {
    penalty = 0;
  }

  return 0;
}