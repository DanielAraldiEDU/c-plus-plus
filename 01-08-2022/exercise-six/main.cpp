#include <iostream>

using namespace std;

int main()
{
  float farenheit;

  cout << "Informe a temperatura em graus Farenheit:\n";
  cin >> farenheit;

  float celsius = (5 * (farenheit - 32) / 9);

  cout << "Graus em celsius: " << celsius;

  return 0;
}