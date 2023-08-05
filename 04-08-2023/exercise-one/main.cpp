#include <iostream>

using namespace std;

#define MAXIMUM 20

struct List {
    char array[MAXIMUM];
    int lastIndex;
};

void initialize(List &list){
    list.lastIndex = -1;
}

// sort default: '' - (no sort) | 'C' - crescent | 'D' - decrescent
bool insert(List &list, char value, char sort = ' '){
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

// lista => lista a ser usada na pesquisa
// valor => valor a ser procurado
// retorna a posição do valor ou -1 se não achou
int search(List list, char value){
}

// lista => lista a ser usada na retirada
// valor => valor a ser retirado
// retorna true (retirada ok) ou false (retirada falhou)
bool remove(List &list, char value){
}

// lista => lista a ser usada na retirada
// pos => posicao do valor a ser retirado
// retorna true (retirada ok) ou false (retirada falhou)
bool remove(List &list, int position){
}

void show(List list){
    for(int index = 0; index <= list.lastIndex; index++) { 
        cout << list.array[index] << " ";
    }
}

int main(){
    List list;
    
    initialize(list);
    
    insert(list, 'P', 'D');
    insert(list, 'E', 'D');
    insert(list, 'R', 'D');
    insert(list, 'N', 'D');
    insert(list, 'A', 'D');
    insert(list, 'M', 'D');
    insert(list, 'B', 'D');
    insert(list, 'U', 'D');
    insert(list, 'C', 'D');
    insert(list, 'O', 'D');

    cout << endl << "List: ";
    show(list);
}
