#include <iostream>

using namespace std;

int main()
{
  int birthYear, birthMonth, birthDay, currentYear, currentMonth, currentDay, age;

  cout << "Informe seu ano de nascimento:\n";
  cin >> birthYear;

  cout << "Informe seu mês de nascimento:\n";
  cin >> birthMonth;

  cout << "Informe seu dia de nascimento:\n";
  cin >> birthDay;

  cout << "Informe o ano atual:\n";
  cin >> currentYear;

  cout << "Informe o mês atual:\n";
  cin >> currentMonth;

  cout << "Informe o dia atual:\n";
  cin >> currentDay;

  age = currentYear - birthYear;

  if (age >= 0)
  {
    if (currentMonth > birthMonth || (currentMonth == birthMonth && currentDay >= birthDay))
    {
      cout << "Idade: " << age;
    }
    else
    {
      cout << "Idade: " << age - 1;
    }
  }
  else
  {
    cout << "Pessoa ainda não nasceu";
  }

  return 0;
}
