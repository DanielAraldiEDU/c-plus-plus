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

  if (birthYear < 0 || currentYear < 0)
  {
    cout << "O ano da data informada é inválido";

    return 0;
  }

  if ((birthMonth < 1 || birthMonth > 12) || (currentMonth < 1 || currentMonth > 12))
  {
    cout << "O mês da data informada é inválido";

    return 0;
  }

  if (birthMonth % 2 == 1 && (birthDay < 1 || birthDay > 31) ||
      currentMonth % 2 == 1 && (currentDay < 1 || currentDay > 31) ||
      birthMonth % 2 == 0 && (birthDay < 1 || birthDay > 30) ||
      currentMonth % 2 == 0 && (currentDay < 1 || currentDay > 30) ||
      birthMonth == 2 && birthYear % 4 == 0 && (birthDay < 1 || birthDay > 29) ||
      currentMonth == 2 && currentYear % 4 != 0 && (currentDay < 1 || currentDay > 28))
  {
    cout << "O dia da data informada é inválido";

    return 0;
  }

  age = currentYear - birthYear;

  if (age >= 0)
  {
    if (currentMonth > birthMonth ||
        (currentMonth == birthMonth && currentDay >= birthDay) ||
        (age == 0 && currentMonth == birthMonth && currentDay < birthDay))
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
