#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream file;

  file.open("file.bin", ios::out | ios::app | ios::binary);
  file.close();

  if (file.is_open())
    cout << "File is opening!";

  return 0;
}