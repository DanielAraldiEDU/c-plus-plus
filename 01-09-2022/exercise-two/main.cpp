#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream file;

  file.open("file.bin", ios::out | ios::app | ios::binary);

  if (file.is_open())
  {
    cout << "File is opening!";
    file.close();
  }
  else
  {
    cout << "File not found!";
  }

  return 0;
}