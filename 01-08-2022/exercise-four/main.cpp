#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float circle, area;

  cout << "Informe o raio do círculo:\n";
  cin >> circle;

  area = circle / (2 * M_PI);

  cout << "Área do círculo: " << area;
}