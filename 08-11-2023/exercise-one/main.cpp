#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

#define LENGTH 15

void addValuesToArray(int array[], int length, int limit);
void printArray(int array[], int length);
void sort(int array[], int increment, int index, int length);
void shellSort(int array[], int length);


void addValuesToArray(int array[], int length, int limit = 100) {
    for (int index = 0; index < length; index++) array[index] = rand() % limit;
}

void printArray(int array[], int length) {
    for (int index = 0; index < length; index++) cout << array[index] << "  ";
}

void sort(int array[], int increment, int index, int length) {
    int i, j, k, temp;
    bool isFound;

    for (i = (index + increment); i < length; i += increment) {
        j = index;
        isFound = false;
        
        while(j < i && !isFound) {
            if (array[i] < array[j]) isFound = true;
            else j = j + increment;
        }
        
        if (isFound) {
            temp = array[i];
            k = i - increment;
            while(k > (j - increment)) {
                array[k + increment] = array[k];
                k = k - increment;
            }
            array[j] = temp;
        }
    }
}

void shellSort(int array[], int length) {
    for (int index = 2; index >= 0; index--) {
        int increment = pow(2, index);
        for (int j = 0; j <= increment; j++) sort(array, increment, j, length);
    }
}

int main(){
    srand(time(NULL));
    
    int array[LENGTH];

    addValuesToArray(array, LENGTH);
    cout << "Array: ";
    printArray(array, LENGTH);
    
    shellSort(array, LENGTH);
    
    cout << endl << "Sorted Array: ";
    printArray(array, LENGTH);
    cout << endl;
}
