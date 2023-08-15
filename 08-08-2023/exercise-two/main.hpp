#include <iostream>

using namespace std;

template <typename T>
struct Node {
    T data;
    Node *next, *previous;
};

template <typename T>
struct Lde {
    Node<T> *start, *end;
};

template <typename T>
void initialize(Lde<T> &lde) {
    lde.start = NULL;
    lde.end = NULL;
}

template <typename T>
void reset(Lde<T> &list) {
    Node<T> *auxiliar = list.start;
    Node<T> *otherAuxiliar;

    while (auxiliar != NULL) {
        otherAuxiliar = auxiliar->next;
        delete auxiliar;
        auxiliar = otherAuxiliar;
    }
}

template <typename T>
void show(Lde<T> &list, char sort = 'C') {
    Node<T> *auxiliar = sort == 'C' ? list.start : list.end;
    
    while (auxiliar != NULL) {
        cout << auxiliar->data << " ";
        auxiliar = sort == 'C' ? auxiliar->next : auxiliar->previous;
    }
    
    if (list.start == NULL) return;
}

template <typename T>
bool insert(Lde<T> &list, T value) {
    Node<T> *newNode = new Node<T>;
    if (newNode == NULL) return false;
    
    newNode->data = value;
    newNode->next = NULL;
    newNode->previous = NULL;

    if (list.start == NULL) {
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
    
    Node<T> *auxiliarPrevious = list.start;
    while (auxiliarPrevious->data < value && auxiliarPrevious->next->data < value) {
        auxiliarPrevious = auxiliarPrevious->next;
    }
    
    Node<T> *auxiliarNext = auxiliarPrevious->next;
    newNode->previous = auxiliarPrevious;
    newNode->next = auxiliarNext;
    auxiliarPrevious->next = newNode;
    auxiliarNext->previous = newNode;
    return true;
}

template <typename T>
bool insertEnd(Lde<T> &list, T value) {
    Node<T> *newNode = new Node<T>;
    if (newNode == NULL) return false;
    
    newNode->data = value;
    newNode->previous = NULL;
    newNode->next = NULL;

    if (list.start == NULL) {
        list.start = newNode;
        list.end = newNode;
        return true;
    }

    list.end->next = newNode;
    newNode->previous = list.end;
    list.end = newNode;
    return true;
}

template <typename T>
Node<T>* search(Lde<T> list, T value) {
    Node<T> *auxiliar = list.start;

    while (auxiliar != NULL) {
        if (auxiliar->data == value) return auxiliar;
        auxiliar = auxiliar->previous;
    }
    
    return NULL;
}

template <typename T>
bool remove(Lde<T> &list, T value) {
    Node<T> *auxiliar, *previousAuxiliar, *nextAuxiliar;

    auxiliar = search(list, value);

    if( auxiliar == NULL ) return false;
    previousAuxiliar = auxiliar->previous;
    nextAuxiliar = auxiliar->next;


    if (auxiliar == list.start) {
        list.start = nextAuxiliar;
        if (auxiliar == list.end) list.end = NULL;
        else nextAuxiliar->previous = NULL;
    } else {
        previousAuxiliar->next = auxiliar->next;
        if (auxiliar == list.end) list.end = previousAuxiliar;
        else nextAuxiliar->previous = previousAuxiliar;
    }
    
    delete auxiliar;
    return true;
}
