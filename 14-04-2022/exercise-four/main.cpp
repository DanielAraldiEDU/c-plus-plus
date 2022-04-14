#include <iostream>

using namespace std;

int main()
{
  int age;
  int ageBiggestEigtheen = 0;

  for (int i = 0; i < 10; i++)
  {
    cout << "Informe a sua idade:\n";
    cin >> age;

    if (age >= 18)
    {
      ageBiggestEigtheen++;
    }
  }

  cout << "A quantidade de pessoas com idade maior ou igual a 18 anos é: " << ageBiggestEigtheen;

  return 0;
}