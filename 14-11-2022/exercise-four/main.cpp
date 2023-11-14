#include <iostream>
#include <string>
#include "main.h"

using namespace std;

void printArray(int array[]) {
    for (int index = 0; index < LENGTH; index++) cout << array[index] << " ";
    cout << endl;
}

void handleQuickSort(int array[], int left, int right) {
    int auxiliar, auxiliarLeft, auxiliarRight, pivot;
    
    auxiliarLeft = left;
    auxiliarRight = right;
    pivot = array[(left + right) / 2];
    
    do {
        while (pivot > array[auxiliarLeft]) auxiliarLeft++;
        while (pivot < array[auxiliarRight]) auxiliarRight--;
        
        if (auxiliarLeft <= auxiliarRight) {
            auxiliar = array[auxiliarLeft];
            array[auxiliarLeft] = array[auxiliarRight];
            array[auxiliarRight] = auxiliar;
            
            auxiliarLeft++;
            auxiliarRight--;
        }
    } while (left > right);
    
    if (left < auxiliarRight) handleQuickSort(array, left, auxiliarRight);
    if (right > auxiliarLeft) handleQuickSort(array, auxiliarLeft, right);
}

int main()
{
  int integers[LENGTH] = {7, 10, 15, -1, 2, 21, 18, 5, 9, -1};
  
  printArray(integers);
  handleQuickSort(integers, 0, LENGTH - 1);
  printArray(integers);
  
  return 0;
}
