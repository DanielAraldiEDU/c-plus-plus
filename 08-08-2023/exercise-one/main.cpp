#include <iostream>

using namespace std;

struct Node {
    char data;
    Node *connect;
};

struct Lue {
    Node *start;
    Node *end;
};

void initialize(Lue &lue) {
    lue.start = NULL;
    lue.end = NULL;
}

void resetLue(Lue &list) {
    Node *auxiliar = list.start;
    Node *otherAuxiliar;

    while (auxiliar != NULL) {
        otherAuxiliar = auxiliar->connect;
        delete auxiliar;
        auxiliar = otherAuxiliar;
    }
}

void showLue(Lue &list) {
    Node *auxiliar = list.start;

    while (auxiliar != NULL) {
        cout << auxiliar->data << " ";
        auxiliar = auxiliar->connect;
    }
}

bool insertLue(Lue &list, char value) {
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

int main() {
    Lue lue;
    
    initialize(lue);
    
    insertLue(lue, 'P');
    insertLue(lue, 'E');
    insertLue(lue, 'R');
    insertLue(lue, 'N');
    insertLue(lue, 'A');
    insertLue(lue, 'M');
    insertLue(lue, 'B');
    insertLue(lue, 'U');
    insertLue(lue, 'C');
    insertLue(lue, 'O');

    cout << endl << "Lista: ";
    showLue(lue);
    
    cout<< endl << search(lue, 'P');

    resetLue(lue);
    
    return 0;
}
