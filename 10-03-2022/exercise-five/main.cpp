#include <iostream>

using namespace std;

int main()
{
  float amount, result = 0;

  cout << "Informe a quantidade de cavalos:\n";
  cin >> amount;

  result = amount * 4;

  cout << "Serão necessárias " << result << " ferraduras";
  return 0;
}
