#include <iostream>

using namespace std;

int main()
{
  float firstProve, secondProve, thirdProve, media;

  cout << "Digite as notas a seguir:\n";
  cin >> firstProve >> secondProve >> thirdProve;

  media = (firstProve + secondProve + thirdProve) / 3;

  if (media >= 6)
  {
    cout << "Você foi aprovado!";
  }
  else
  {
    cout << "Você foi reprovado!";
  }

  return 0;
}