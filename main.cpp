#include <iostream>

using namespace std;

int main() {
  float paidValue, productValue, restValue = 0;

  cout << "Informe o valor pago: \n";
  cin >> paidValue;

  cout << "Informe o valor do produto: \n";
  cin >> productValue;

  restValue = paidValue - productValue;

  cout << "Seu troco é: " << restValue;
  return 0;
}
