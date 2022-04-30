#include <iostream>

using namespace std;

#define AMOUNT 10

int main()
{
  float notes[AMOUNT] = {3.8, 2.45, 4.25, 7.5, 5, 6.25, 8.25, 9.75, 10, 10};
  float media = 0, notesSum = 0;
  int studentsWithNotesBiggestMedia = 0;

  for (int i = 0; i < AMOUNT; i++)
  {
    notesSum += notes[i];
  }

  media = notesSum / AMOUNT;

  for (int i = 0; i < AMOUNT; i++)
  {
    if (notes[i] > media)
    {
      studentsWithNotesBiggestMedia++;
    }
  }

  cout << "\nA média da turma é: " << media;
  cout << "\nAlunos com notas acima da média: " << studentsWithNotesBiggestMedia;

  return 0;
}