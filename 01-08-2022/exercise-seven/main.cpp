#include <iostream>

using namespace std;

int main()
{
  int numberOne, numberTwo;
  float realNumber;

  cout << "Digite o primeiro número:\n";
  cin >> numberOne;

  cout << "Digite o segundo número:\n";
  cin >> numberTwo;

  cout << "Digite um número real:\n";
  cin >> realNumber;

  float firstResult = (numberOne * 2) * (numberTwo / 2);
  float secondResult = (numberOne * 3) + realNumber;
  float thirdResult = realNumber * realNumber * realNumber;

  cout << "Produto do dobro do primeiro com a metade do segundo: " << firstResult << endl;
  cout << "A soma do triple do primeiro com o terceiro: " << secondResult << endl;
  cout << "O terceiro número elevado ao cubo: " << thirdResult;

  return 0;
}