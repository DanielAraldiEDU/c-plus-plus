#include <iostream>

using namespace std;

int main()
{
  int sideTop, sideLeft, sideRight;

  cout << "Digite três números inteiros:\n";
  cin >> sideTop >> sideLeft >> sideRight;

  if (sideTop == sideLeft && sideTop == sideRight)
  {
    cout << "O triâgulo é equilátero";
  }
  else
  {
    if (sideTop != sideLeft && sideTop != sideRight && sideLeft != sideRight)
    {

      cout << "O triâgulo é escalano";
    }
    else
    {

      if (sideTop == sideLeft || sideTop == sideRight || sideLeft == sideRight)
      {
        cout << "O triâgulo é isósceles";
      }
    }
  }

  return 0;
}