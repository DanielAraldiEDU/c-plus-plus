#include <iostream>
#include "main.h"

using namespace std;

istream &operator>>(istream &is, Client &client)
{
  is >> client.name >> client.phone >> client.email;
  return is;
}

int main()
{
  Client client = {"", "", "", {{"Garrafa de água", 5}, {"Chopp", 10}}};

  operator>>(cin, client);

  client.name.operator+=(" - Comprador");

  cout << client.operator[](0).name;
  cout << endl;
  cout << client.name;

  return 0;
}