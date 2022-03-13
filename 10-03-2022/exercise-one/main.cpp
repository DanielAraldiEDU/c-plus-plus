#include <iostream>

using namespace std;

int main()
{
  float paidValue, productValue, result = 0;

  cout << "Informe o valor pago:\n";
  cin >> paidValue;

  cout << "Informe o valor do produto:\n";
  cin >> productValue;

  result = paidValue - productValue;

  cout << "Seu troco é: " << result;
  return 0;
}
