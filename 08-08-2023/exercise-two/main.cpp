#include <iostream>

using namespace std;

struct Node {
    char data;
    Node *next, *previous;
};

struct Lue {
    Node *start, *end;
};

void initialize(Lue &lue) {
    lue.start = NULL;
    lue.end = NULL;
}

void reset(Lue &list) {
    Node *auxiliar = list.start;
    Node *otherAuxiliar;

    while (auxiliar != NULL) {
        otherAuxiliar = auxiliar->next;
        delete auxiliar;
        auxiliar = otherAuxiliar;
    }
}

void show(Lue &list, char sort = 'C') {
    Node *auxiliar = sort == 'C' ? list.start : list.end;
    
    while (auxiliar != NULL) {
        cout << auxiliar->data << " ";
        auxiliar = sort == 'C' ? auxiliar->next : auxiliar->previous;
    }
    
    if (list.start == NULL) return;
}

bool insert(Lue &list, char value) {
    Node *newNode = new Node;
    if (newNode == NULL) return false;
    
    newNode->data = value;
    newNode->next = NULL;
    newNode->previous = NULL;

    const bool isEmptyList = list.start == NULL || list.end == NULL;
    if (isEmptyList) {
        list.start = newNode;
        list.end = newNode;
        return true;
    }

    const bool isFirstNode = value < list.start->data;
    if (isFirstNode) {
        newNode->next = list.start;
        list.start->previous = newNode;
        list.start = newNode;
        return true;
    }

    const bool isLastNode = value > list.end->data;
    if (isLastNode){
        list.end->next = newNode;
        newNode->previous = list.end;
        list.end = newNode;
        return true;
    }
    
    Node *auxiliar = list.start;
    while (auxiliar->data < value && auxiliar->previous->data < value) {
        auxiliar = auxiliar->previous;
    }
    
    newNode->previous = auxiliar;
    newNode->next = auxiliar->next;
    auxiliar->next->previous = newNode;
    auxiliar->next = newNode;
    return true;
}

Node* search(Lue list, char value, char sort = 'C') {
    Node *auxiliar = sort == 'C' ? list.start : list.end;

    while (auxiliar->data != value) {
        auxiliar = sort == 'C' ? auxiliar->next : auxiliar->previous;
        if (auxiliar == NULL) return NULL;
    }
    
    return auxiliar;
}

// TODO: Adapter to next and previous
// bool remove(Lue &list, char value) {
//     Node *auxiliar = list.start, *previous = NULL;
    
//     while (auxiliar != NULL && auxiliar->data != value) {
//         previous = auxiliar;
//         auxiliar = auxiliar->connect;
//     }
    
//     if (auxiliar == NULL) return false;
    
//     if (auxiliar == list.start) {
//         list.start = list.start->connect;
//         if (auxiliar == list.end) list.end = NULL;
//     } else {
//         previous->connect = auxiliar->connect;
//         if (auxiliar == list.end) list.end = previous;
//     }
    
//     delete auxiliar;
//     return true;
// }

int main() {
    Lue lue;
    
    initialize(lue);
    
    insert(lue, 'P');
    insert(lue, 'E');
    insert(lue, 'R');
    insert(lue, 'N');
    insert(lue, 'A');
    insert(lue, 'M');
    insert(lue, 'B');
    insert(lue, 'U');
    insert(lue, 'C');
    insert(lue, 'O');

    cout << "List: ";
    show(lue);
    
    cout<< endl << search(lue, 'P');

    // remove(lue, 'A');
    // remove(lue, 'E');
    // remove(lue, 'O');
    // remove(lue, 'U');
    cout << endl << "Removed list: ";
    show(lue);
    
    reset(lue);
    
    return 0;
}
