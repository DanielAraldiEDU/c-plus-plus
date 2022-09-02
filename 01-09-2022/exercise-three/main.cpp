#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string line;
  ifstream file;

  file.open("file.md");

  if (file.is_open())
  {
    while (getline(file, line))
    {
      cout << line << endl;
    }
    file.close();
  }
  else
  {
    cout << "File not found!";
  }

  return 0;
}