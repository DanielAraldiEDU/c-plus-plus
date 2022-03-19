#include <iostream>

using namespace std;

int main()
{
  char letter;
  bool isVowel;

  cout << "Digite uma letra:\n";
  cin >> letter;

  isVowel = letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u';

  if (isVowel)
  {
    cout << "É uma vogal";
  }
  else
  {
    cout << "Não é uma vogal";
  }

  return 0;
}
