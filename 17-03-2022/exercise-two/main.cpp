#include <iostream>

using namespace std;

int main()
{
  float distance, gasolinePerKm, gasolinePrice, gasolineSpent, spent = 0;

  cout << "Informe a distância:\n";
  cin >> distance;

  cout << "Informe o litro/Km:\n";
  cin >> gasolinePerKm;

  cout << "Informe o preço da gasolina:\n";
  cin >> gasolinePrice;

  gasolineSpent = distance / gasolinePerKm;
  spent = gasolinePrice * gasolineSpent;

  cout << "Você gastou R$ " << spent;
}