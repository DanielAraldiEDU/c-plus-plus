#include <iostream>

using namespace std;

int main()
{
  float firstProve, secondProve, thirdProve, media = 0;

  cout << "Informe o valor da prova um:\n";
  cin >> firstProve;

  cout << "Informe o valor da prova dois:\n";
  cin >> secondProve;

  cout << "Informe o valor da prova três:\n";
  cin >> thirdProve;

  media = ((firstProve * 0.2) + (secondProve * 0.4) + (thirdProve * 0.6));

  cout << "Informe o valor da média: " << media;

  return 0;
}
