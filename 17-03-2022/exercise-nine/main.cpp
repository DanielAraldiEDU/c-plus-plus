#include <iostream>

using namespace std;

int main()
{
  int hour, minutes = 0;

  cout << "Entre com um número para as horas:\n";
  cin >> hour;

  cout << "Entre com um número para os minutos:\n";
  cin >> minutes;

  if ((hour < 0 || hour > 23) && (minutes < 0 || minutes > 59))
  {
    cout << "A hora é inválida";
  }
  else
  {
    cout << "A hora é válida";
  }

  return 0;
}
