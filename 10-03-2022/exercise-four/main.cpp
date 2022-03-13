#include <iostream>

using namespace std;

int main()
{
  float productValue, result = 0;

  cout << "Informe o valor do produto:\n";
  cin >> productValue;

  result = productValue + (productValue * 0.15);

  cout << "Valor do produto com 15% de imposto: " << result;
  return 0;
}
