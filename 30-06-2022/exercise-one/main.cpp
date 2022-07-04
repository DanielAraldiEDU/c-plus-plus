#include "./main.h"

int main()
{
  clearScreen();

  int firstNumber = random(500);

  delay(5000);

  int secondNumber = random(500);

  int sum = firstNumber + secondNumber;

  if (sum > 500)
    textColor(RED, GREEN);
  else
    textBackground(WHITE);
}