#include <iostream>

using namespace std;

#define LENGTH 10

void printArray(int array[]) {
    for (int index = 0; index < LENGTH; index++) cout << array[index] << " ";
    cout << endl;
}

void merge(int array[], int start, int middle, int end) {
    int firstPiece = start, secondPiece = middle + 1, auxiliar = 0, length = end - start + 1;
    int *auxiliarArray = new int[length];
    
    while (firstPiece <= middle && secondPiece <= end) {
        if (array[firstPiece] < array[secondPiece]) {
            auxiliarArray[auxiliar] = array[firstPiece];
            firstPiece++;
        } else {
            auxiliarArray[auxiliar] = array[secondPiece];
            secondPiece++;
        }
        auxiliar++;
    }
    
    while (firstPiece <= middle) {
        auxiliarArray[auxiliar] = array[firstPiece];
        auxiliar++;
        firstPiece++;
    }
    
    while (secondPiece <= end) {
        auxiliarArray[auxiliar] = array[secondPiece];
        auxiliar++;
        secondPiece++;
    }
    
    for (auxiliar = start; auxiliar <= end; auxiliar++) array[auxiliar] = auxiliarArray[auxiliar - start];
    delete []auxiliarArray;
}

void handleMergeSort(int array[], int start, int end) {
    if (start == end) return;
    
    int middle = (start + end) / 2;
    handleMergeSort(array, start, middle);
    handleMergeSort(array, middle + 1, end);
    merge(array, start, middle, end);
}

int main() {
  int integers[LENGTH] = {7, 10, 15, -1, 2, 21, 18, 5, 9, -1};
  
  printArray(integers);
  handleMergeSort(integers, 0, LENGTH - 1);
  printArray(integers);

  return 0;
}
