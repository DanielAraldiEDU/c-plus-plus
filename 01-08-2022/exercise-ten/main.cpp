#include <iostream>
#include <cmath>

using namespace std;

#define PAINT_WITH_A_LITER 3
#define PAINT_CAN_PRICE 80
#define CANS 18

int main()
{
  float squareMeters;

  cout << "Digite a quantidade de metros quadrados a serem pintados:\n";
  cin >> squareMeters;

  float pricePerLiter = PAINT_CAN_PRICE / CANS;

  float liters = squareMeters / PAINT_WITH_A_LITER;

  float totalPrice = liters * pricePerLiter;

  int amountCans = ceil(totalPrice / PAINT_CAN_PRICE);

  cout << "O preço total é de R$ " << totalPrice << endl;
  cout << "Latas a serem comporadas: " << amountCans << endl;

  return 0;
}