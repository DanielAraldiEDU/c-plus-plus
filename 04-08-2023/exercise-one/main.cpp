#include <iostream>

using namespace std;

#define MAXIMUM 20

struct List {
    char array[MAXIMUM];
    int lastIndex;
};

void initialize(List &list) {
    list.lastIndex = -1;
}

// sort default: '' - (no sort) | 'C' - crescent | 'D' - decrescent
bool insert(List &list, char value, char sort = ' ') {
    int position;
    
    if (list.lastIndex == (MAXIMUM - 1)) return false;

    switch(sort){
        case 'C':
            position = 0;
            
            while (position <= list.lastIndex && value > list.array[position]) position++;
            list.lastIndex++;
            
            for(int index = list.lastIndex; index > position; index--) {
                list.array[index] = list.array[index - 1];
            }
            list.array[position] = value;
            break;
        case 'D':
            position = 0;
            
            while (position <= list.lastIndex && value < list.array[position]) position++;
            list.lastIndex++;
            
            for(int index = list.lastIndex; index > position; index--) {
                list.array[index] = list.array[index - 1];
            }
            list.array[position] = value;
            break;
        default:
            list.lastIndex++;
            list.array[list.lastIndex] = value;
            break;
    }
    return true;
}

int search(List list, char value) {
    for (int index = 0; index <= list.lastIndex; index++) {
        if (list.array[index] == value) return index;
    }
    
    return -1;
}

bool remove(List &list, char value) {
    int valueIndexFound = search(list, value);
    if (valueIndexFound == -1) return false;
    
    list.lastIndex--;
    for (int index = valueIndexFound; index <= list.lastIndex; index++) { 
        list.array[index] = list.array[index + 1];
    }
    
    return true;
}

bool remove(List &list, int position) {
    if (position < 0 || position > list.lastIndex) return false;
    
    list.lastIndex--;
    for(int index = position; index <= list.lastIndex; index++) { 
        list.array[index] = list.array[index + 1];
    }
    
    return true;
}

void show(List list) {
    for(int index = 0; index <= list.lastIndex; index++) { 
        cout << list.array[index] << " ";
    }
}

int main() {
    List list;
    
    initialize(list);
    
    insert(list, 'P');
    insert(list, 'E');
    insert(list, 'R');
    insert(list, 'N');
    insert(list, 'A');
    insert(list, 'M');
    insert(list, 'B');
    insert(list, 'U');
    insert(list, 'C');
    insert(list, 'O');

    const bool wasRemoved = remove(list, 'M');
    cout << (wasRemoved ? "true" : "false") << endl;
    
    cout << "List: ";
    show(list);
}
