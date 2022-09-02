#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string line;
  ofstream writeFile;
  ifstream readFile;

  writeFile.open("file.txt");

  if (writeFile.is_open())
  {
    writeFile << 10 << "\n"
              << 7.5 << "\n"
              << 5 << "\n";

    writeFile.close();
  }
  else
  {
    cout << "File not found!";
  }

  readFile.open("file.txt");

  if (readFile.is_open())
  {
    float sum = 0;
    while (getline(readFile, line))
    {
      sum += stof(line);
    }

    float media = sum / 3;

    cout << "Student grants is: " << media << endl;
  }
  else
  {
    cout << "File not found!";
  }

  return 0;
}