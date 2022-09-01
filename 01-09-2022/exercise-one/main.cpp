#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream file;

  file.open("file.md");

  if (file.is_open())
  {
    file << "### File.md\n\nCreating or wrinting if exists on file.md\n";
  }

  file.close();

  return 0;
}
