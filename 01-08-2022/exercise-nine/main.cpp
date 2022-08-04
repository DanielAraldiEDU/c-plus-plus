#include <iostream>

using namespace std;

int main()
{
  float valuePerHour, hoursPerMonth;

  cout << "Digite o valor por hora:\n";
  cin >> valuePerHour;

  cout << "Digite a quantidade de horas trabalhadas no mês:\n";
  cin >> hoursPerMonth;

  float grossSalary = valuePerHour * hoursPerMonth;
  float payToIR = grossSalary * 0.11;
  float payToINSS = grossSalary * 0.08;
  float payToSyndicate = grossSalary * 0.05;
  float netSalary = grossSalary - (payToIR + payToINSS + payToSyndicate);

  cout << "Salário bruto: " << grossSalary << endl;
  cout << "Quanto pagou ao IR: " << payToIR << endl;
  cout << "Quanto pagou ao INSS: " << payToINSS << endl;
  cout << "Quanto pagou ao sindicato: " << payToSyndicate << endl;
  cout << "Salário liquído: " << netSalary << endl;

  return 0;
}