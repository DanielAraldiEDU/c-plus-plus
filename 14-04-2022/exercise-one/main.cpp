#include <iostream>

using namespace std;

int main()
{
  float numberOne, numberTwo, result = 1;
  int option;

  do
  {
    cout << "\n\nInforme dois números reais:\n";
    cin >> numberOne >> numberTwo;

    while (numberOne != 0 && numberTwo != 0)
    {
      cout << "Selecione uma das operações:\n\n1 - Soma\n2 - Multiplicação\n3 - Divisão\n4 - Potenciação\n";
      cin >> option;

      switch (option)
      {
      case 1:
        result = numberOne + numberTwo;
        cout << "Resultado: " << result;
        break;
      case 2:
        result = numberOne * numberTwo;
        cout << "Resultado: " << result;
        break;
      case 3:
        result = numberOne / numberTwo;
        cout << "Resultado: " << result;
        break;
      case 4:
        for (int i = 0; i < numberTwo; i++)
        {
          result *= numberOne;
        }
        cout << "Resultado: " << result;
        break;
      default:
        cout << "Opção inválida";
        break;
      }
    }
  } while (numberOne != 0 && numberTwo != 0);

  return 0;
}