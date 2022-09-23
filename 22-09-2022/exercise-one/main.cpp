#include <iostream>
#include <time.h>
#include "main.h"

using namespace std;

template <typename T, int number>
T generateNumber()
{
  return rand() % number + 1;
}

Test generateTest()
{
  Test test;

  test.amountQuestion = generateNumber<int, 10>();
  test.note = generateNumber<double, 10>();

  cout << "Informe o nome do aluno: ";
  cin >> test.name;

  return test;
}

void spaceLine()
{
  cout << endl;
}

void showTestResult(Test test)
{
  cout << "Aluno(a): " << test.name << endl;
  cout << "Nota: " << test.note << endl;
  cout << "Quantidade de Questões da Prova: " << test.amountQuestion << endl;

  spaceLine();
}

int main()
{
  srand(time(NULL));

  int amountStudents;

  cout << "Digite a quantidade de estudantes que participaram da prova: ";
  cin >> amountStudents;

  spaceLine();

  Test *testPointer = new Test[amountStudents];

  for (int i = 0; i < amountStudents; i++)
  {
    testPointer[i] = generateTest();
  }

  spaceLine();

  for (int i = 0; i < amountStudents; i++)
  {
    showTestResult(testPointer[i]);
  }

  return 0;
}