#include <iostream>

using namespace std;

int main() {
  int operation = 0;

  cout << "Qual a operação que vocêm deseja fazer?\n";
  cin >> operation;

  float number1, number2, result = 0;
  
  switch(operation) {
    case 1:
        cout << "Informe o valor pago:\n";
        cin >> number1;
      
        cout << "Informe o valor do produto:\n";
        cin >> number2;
      
        result = number1 - number2;
      
        cout << "Seu troco é: " << result;
        return 0;
      break;
    case 2:
        cout << "Informe um número real:\n";
        cin >> number1;
      
        number2 = number1 / 2;
      
        cout << "Metade do valor digitado: " << number2;
        return 0;
      break;
    case 3:
        cout << "Informe o valor por quilo:\n";
        cin >> number1;

        cout << "Informe a quantidade de quilos:\n";
        cin >> number2;
      
        result = number1 * number2;
      
        cout << "Metade do valor digitado: " << result;
        return 0;
      break;
    case 4:
        cout << "Informe o valor do produto:\n";
        cin >> number1;
      
        result = number1 + (number1 * 0.15);
      
        cout << "Valor do produto com 15% de imposto: " << result;
        return 0;
      break;
    case 5:
        cout << "Informe a quantidade de cavalos:\n";
        cin >> number1;
      
        result = number1 * 4;
      
        cout << "Serão necessárias " << result << " ferraduras";
        return 0;
      break;
  }
}
