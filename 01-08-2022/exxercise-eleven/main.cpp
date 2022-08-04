#include <iostream>
#include <cmath>

using namespace std;

#define PAINT_WITH_A_LITER 6
#define PAINT_CAN_PRICE 80
#define PAINT_GALLON_PRICE 25
#define CANS 18

void makePriceAndAmount(float price, int staticPrice)
{
  int amountCans = ceil(price / staticPrice);

  cout << "O preço total é de R$ " << price << endl;
  cout << "Latas a serem comporadas: " << amountCans << endl;
}

int main()
{
  float squareMeters;
  int paintOption;

  cout << "Digite a quantidade de metros quadrados a serem pintados:\n";
  cin >> squareMeters;

  float liters = squareMeters / PAINT_WITH_A_LITER;

  float pricePerLiter = PAINT_CAN_PRICE / CANS;

  float totalPrice = liters * pricePerLiter;

  cout << "Digite a opção de compra:\n";
  cin >> paintOption;

  switch (paintOption)
  {
  case 1:
    makePriceAndAmount(totalPrice, PAINT_CAN_PRICE);
    break;

  case 2:
    makePriceAndAmount(totalPrice, PAINT_GALLON_PRICE);
    break;

  case 3:
    totalPrice = totalPrice * 0.9;
    int staticValue = PAINT_CAN_PRICE + PAINT_GALLON_PRICE;
    makePriceAndAmount(totalPrice, staticValue);
    break;
  }

  return 0;
}