#include <iostream>

using namespace std;

int main() {
  int operation = 0;

  cout << "Qual a operação que vocêm deseja fazer?\n";
  cin >> operation;

  float paidValue, productValue, restValue, realNumber, result = 0;
  
  switch(operation) {
    case 1:
        cout << "Informe o valor pago:\n";
        cin >> paidValue;
      
        cout << "Informe o valor do produto:\n";
        cin >> productValue;
      
        restValue = paidValue - productValue;
      
        cout << "Seu troco é: " << restValue;
        return 0;
      break;
    case 2:
        cout << "Insira um número real:\n";
        cin >> realNumber;
      
        result = realNumber / 2;
      
        cout << "Metade do valor digitado: " << result;
        return 0;
      break;
  }
  
  

}
