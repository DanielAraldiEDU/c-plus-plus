#include <iostream>

using namespace std;

struct Point2D
{
  int x, y;
};

struct Point3D
{
  int x, y, z;
};

int main()
{
  Point2D point2D = {100, 50};

  cout << "Ponto 2D X: " << point2D.x << endl;
  cout << "Ponto 2D Y: " << point2D.y << endl;

  Point3D point3D = {100, 50, 25};

  cout << "Ponto 3D X: " << point3D.x << endl;
  cout << "Ponto 3D Y: " << point3D.y << endl;
  cout << "Ponto 3D Z: " << point3D.z << endl;

  return 0;
}