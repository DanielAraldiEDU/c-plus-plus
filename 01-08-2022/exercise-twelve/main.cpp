#include <iostream>
#include <math.h>

using namespace std;

int main()
{

  int file, speed, loading = 0, seconds = 0;

  cout << "Insira o tamanho do arquivo para download em MB \n";
  cin >> file;
  cout << "Insira a velocidade da sua internet em MB/s \n";
  cin >> speed;

  while (loading < file)
  {
    seconds++;
    loading = loading + speed;
  }

  int minutes = seconds / 60;
  seconds = seconds % 60;

  cout << "O tempo em minutos será igual a " << minutes << " minuto(s) e " << seconds << " segundo(s)";

  return 0;
}
