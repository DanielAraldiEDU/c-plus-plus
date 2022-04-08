#include <iostream>

using namespace std;

int main()
{
  float firstProve, secondProve, thirdProve, media;
  string name;

  cout << "Digite seu nome e as suas notas a seguir:\n";
  cin >> name >> firstProve >> secondProve >> thirdProve;

  media = (firstProve + secondProve + thirdProve) / 3;

  if (media >= 6)
  {
    cout << name << " você foi aprovado!";
  }
  else
  {
    cout << name << " você foi reprovado!";
  }

  return 0;
}