#include <iostream>
#include "main.h"

#define FIVE_TIMES 5
#define THREE_TIMES 3

using namespace std;

struct Subject
{
  string name;
  int day, credits;
};

struct Student
{
  int id;
  string name;
  Subject subjects[5];
};

void readStudents(struct Student students[])
{
  for (int i = 0; i < FIVE_TIMES; i++)
  {
    cout << "Cadastre o aluno " << (i + 1) << ":" << endl;
    cout << "Digite o ID do aluno:" << endl;
    cin >> students[i].id;
    cout << "Digite o nome do aluno:" << endl;
    cin >> students[i].name;
    cout << "Digite as matérias do aluno:" << endl;
    for (int j = 0; j < THREE_TIMES; j++)
    {
      cout << "Digite o nome da matéria do aluno:" << endl;
      cin >> students[i].subjects[j].name;
      cout << "Digite o dia da matéria do aluno:" << endl;
      cin >> students[i].subjects[j].day;
      cout << "Digite os créditos da matéria do aluno:" << endl;
      cin >> students[i].subjects[j].credits;
    }
  }
}

int main()
{
  Student students[5];

  readStudents(students);

  return 0;
}