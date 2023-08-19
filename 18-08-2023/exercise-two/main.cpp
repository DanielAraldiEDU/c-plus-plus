#include <iostream>

using namespace std;

#define LENGTH 1000 

template<typename T> 
struct Queue {
    T array[LENGTH];
    int start, end;
};

template<typename T> 
void initialize(Queue<T> &queue) {
    queue.end = -1;
    queue.start = 0;
}

template<typename T>
bool remove(Queue<T> &queue, T &value) {
    if (queue.start > queue.end) return false;
    
    value = queue.array[queue.start];
    queue.start++;
    return true;
}

template<typename T>
void insert(Queue<T> &queue, T value) {
    if (queue.end == LENGTH - 1) return;
    queue.end++;
    queue.array[queue.end] = value;
}

template<typename T>
void show(Queue<T> &queue) {
    for (int index = queue.start; index <= queue.end; index++) {
        cout << queue.array[index] << " ";
    }    
}

int main() {
    Queue<char> queue;
    
    initialize(queue);
    
    insert<char>(queue, 'P');
    insert<char>(queue, 'U');
    insert<char>(queue, 'S');
    insert<char>(queue, 'H');
    
    cout << "Pushed Queue: ";
    show(queue);
    
    char character;
    remove<char>(queue, character);
    cout << endl << "Removed Character: " << character;
    
    cout << endl << "Queue: ";
    show(queue);
    
    return 0;
}
