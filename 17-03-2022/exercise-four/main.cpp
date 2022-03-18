#include <iostream>

using namespace std;

int main()
{
  float salary, invoceOne, invoceTwo, restSalary = 0;

  cout << "Informe o salário:\n";
  cin >> salary;

  cout << "Informe o valor primeira conta:\n";
  cin >> invoceOne;

  cout << "Informe o valor segunda conta:\n";
  cin >> invoceTwo;

  restSalary = salary - (invoceOne * 1.02) - (invoceTwo * 1.02);

  cout << "Restou " << restSalary << " do seu salário";

  return 0;
}
