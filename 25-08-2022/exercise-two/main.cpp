#include <iostream>

using namespace std;

template <typename T, int length>
struct Collections
{
  string name;
  double price;
  T collection[length];
};

struct Book
{
  string name;
  double price;
  int barcode;
};

struct Coin
{
  string republic;
  int value;
};

int main()
{
  Collections<Coin, 5> collectionCoins;
  Collections<Book, 3> collectionBooks;

  collectionCoins.name = "Coins";
  collectionCoins.price = 99.90;
  collectionCoins.collection[0].republic = "Brazil";
  collectionCoins.collection[0].value = 5;

  collectionBooks.name = "Books";
  collectionBooks.price = 499.90;
  collectionBooks.collection[0].barcode = 1234567890;
  collectionBooks.collection[0].name = "Harry Potter";
  collectionBooks.collection[0].price = 19.90;

  cout << "Collection name: " << collectionCoins.name << endl;
  cout << "Collection price: " << collectionCoins.price << endl;
  cout << "Collection republics: " << collectionCoins.collection[0].republic << endl;
  cout << "Collection values: " << collectionCoins.collection[0].value << endl;

  cout << "Collection name: " << collectionBooks.name << endl;
  cout << "Collection name: " << collectionBooks.price << endl;
  cout << "Collection barcodes: " << collectionBooks.collection[0].barcode << endl;
  cout << "Collection names: " << collectionBooks.collection[0].name << endl;
  cout << "Collection prices: " << collectionBooks.collection[0].price << endl;

  return 0;
}