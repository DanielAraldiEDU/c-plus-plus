#include <iostream>

using namespace std;

struct Node {
    char data;
    Node *connect;
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
        otherAuxiliar = auxiliar->connect;
        delete auxiliar;
        auxiliar = otherAuxiliar;
    }
}

void show(Lue &list) {
    Node *auxiliar = list.start;

    while (auxiliar != NULL) {
        cout << auxiliar->data << " ";
        auxiliar = auxiliar->connect;
    }
}

bool insert(Lue &list, char value) {
    Node *newNode = new Node;
    if (newNode == NULL) return false;
    
    newNode->data = value;
    newNode->connect = NULL;

    const bool isEmptyList = list.start == NULL || list.end == NULL;
    if (isEmptyList) {
        list.start = newNode;
        list.end = newNode;
        return true;
    }

    const bool isFirstNode = value < list.start->data;
    if (isFirstNode) {
        newNode->connect = list.start;
        list.start = newNode;
        return true;
    }

    const bool isLastNode = value > list.end->data;
    if (isLastNode){
        list.end->connect = newNode;
        list.end = newNode;
        return true;
    }
    
    Node *auxiliar = list.start;

    while (auxiliar->data < value && auxiliar->connect->data < value) {
        auxiliar = auxiliar->connect;
    }
    
    newNode->connect = auxiliar->connect;
    auxiliar->connect = newNode;
    
    return true;
}

Node* search(Lue list, char value) {
    Node *auxiliar = list.start;

    while (auxiliar->data != value) {
        auxiliar = auxiliar->connect;
        if (auxiliar == NULL) return NULL;
    }
    
    return auxiliar;
}

bool remove(Lue &list, char value) {
    Node *auxiliar = list.start, *previous = NULL;
    
    while (auxiliar != NULL && auxiliar->data != value) {
        previous = auxiliar;
        auxiliar = auxiliar->connect;
    }
    
    if (auxiliar == NULL) return false;
    
    if (auxiliar == list.start) {
        list.start = list.start->connect;
        if (auxiliar == list.end) list.end = NULL;
    } else {
        previous->connect = auxiliar->connect;
        if (auxiliar == list.end) list.end = previous;
    }
    
    delete auxiliar;
    return true;
}

int size(Lue list) {
    Node *auxiliar = list.start;
    int couter = 0;

    while (auxiliar != NULL) {
        auxiliar = auxiliar->connect;
        couter++;
    }
    
    return couter;
}

bool compare(Lue firstList, Lue secondList) {
    Node *auxiliar = firstList.start;
    Node *otherAuxiliar = secondList.start;
    bool isEqual = true;
    
    while (auxiliar != NULL || otherAuxiliar != NULL) {
        if (auxiliar->data != otherAuxiliar->data) return false;
        auxiliar = auxiliar->connect;
        otherAuxiliar = otherAuxiliar->connect;
    }
    
    return isEqual;
}

int main() {
    Lue lue;
    Lue otherLue;
    
    initialize(lue);
    initialize(otherLue);
    
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
    
    cout << endl << "List size: " << size(lue);
    
    cout << endl << search(lue, 'P');
    
    insert(otherLue, 'P');
    cout << endl << "Lists are equal: " << (compare(lue, otherLue) ? "true" : "false");

    remove(lue, 'A');
    remove(lue, 'E');
    remove(lue, 'O');
    remove(lue, 'U');
    cout << endl << "Removed list: ";
    show(lue);
    
    reset(lue);
    
    return 0;
}
