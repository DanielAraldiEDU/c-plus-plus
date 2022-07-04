#include <windows.h>
#include <time.h>

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define AQUA 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define WHITE 7
#define GRAY 8
#define LIGHT_BLUE 9
#define LIGHT_GREEN 10
#define LIGHT_AQUA 11
#define LIGHT_RED 12
#define LIGHT_PURPLE 13
#define LIGHT_YELLOW 14
#define BRIGHT_WHITE 15

void clearScreen()
{
  system("cls");
}

void delay(unsigned int time)
{
  Sleep(time);
}

int random(int maximum, int minimum = 0)
{
  return (rand() % maximum) + minimum;
}

void textColor(int foregroundColor, int backgroundColor)
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)(foregroundColor | backgroundColor << 4));
}

void textBackground(int newColor)
{
  newColor = newColor << 4;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)(newColor | newColor));
}
