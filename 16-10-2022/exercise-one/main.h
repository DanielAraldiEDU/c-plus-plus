#include <iostream>

using namespace std;

struct Purchase
{
  string name;
  double price;
};

struct Client
{
  string name;
  string phone;
  string email;
  Purchase purchases[100];
  Purchase &operator[](int index)
  {
    return purchases[index];
  }
};

istream &operator>>(istream &is, Client &client);