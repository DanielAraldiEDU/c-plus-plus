#include <iostream>

using namespace std;

struct Car
{
  int doors;
  int wheels;
  string color;
  string model;
};

int main()
{
  Car cars[] = {{2, 4, "#FFFFFF", "BMW"}, {4, 4, "#000000", "MERCEDES"}};
  Car car = {2, 4, "#CCCCCC", "FORD"};

  cout << car.model << endl;
  cout << cars[0].model << endl;

  return 0;
}