#include <iostream>

using namespace std;

#define MODULE 9

struct Node {
    int data;
    Node *connect;
};

struct Lue {
    Node *start, *end;
};

struct Hasher {
    Lue list[MODULE];
};

int getIndex(int number) {
    return number % MODULE;
}

void initialize(Lue &lue) {
    lue.start = NULL;
    lue.end = NULL;
}

void initialize(Hasher &hasher) {
    for (int index = 0; index < MODULE; index++) {
        Lue list;
        initialize(list);
        hasher.list[index] = list;
    }
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

bool insert(Lue &list, int value) {
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

    const bool isFirstNode = value <= list.start->data;
    if (isFirstNode) {
        newNode->connect = list.start;
        list.start = newNode;
        return true;
    }

    const bool isLastNode = value >= list.end->data;
    if (isLastNode){
        list.end->connect = newNode;
        list.end = newNode;
        return true;
    }
    
    Node *auxiliar = list.start;

    while (auxiliar->data <= value && auxiliar->connect->data <= value) {
        auxiliar = auxiliar->connect;
    }
    
    newNode->connect = auxiliar->connect;
    auxiliar->connect = newNode;
    
    return true;
}

bool insert(Hasher &hasher, int value) {
    int index = getIndex(value);
    Lue list = hasher.list[index];
    const bool wasInserted = insert(list, value);
    if (!wasInserted) return false;
    
    hasher.list[index] = list;
    return true;
}

void show(Lue list) {
    Node *auxiliar = list.start;

    while (auxiliar != NULL) {
        cout << auxiliar->data << " ";
        auxiliar = auxiliar->connect;
    }
    
    cout << endl;
}

void show(Hasher hasher) {
    for (int index = 0; index < MODULE; index++) show(hasher.list[index]);
}

int main() {
    Hasher hasher;
    
    initialize(hasher);
    insert(hasher, 5);
    insert(hasher, 28);
    insert(hasher, 19);
    insert(hasher, 15);
    insert(hasher, 20);
    insert(hasher, 33);
    insert(hasher, 12);
    insert(hasher, 7);
    insert(hasher, 10);
    
    show(hasher);
    
    return 0;
}
