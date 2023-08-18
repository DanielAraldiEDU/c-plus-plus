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
T pop(Queue<T> &queue) {
    T value = NULL;
    if (queue.start > queue.end) return value;
    
    value = queue.array[queue.start];
    queue.start++;
    return value;
}

template<typename T>
void push(Queue<T> &queue, T value) {
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
    
    push<char>(queue, 'P');
    push<char>(queue, 'U');
    push<char>(queue, 'S');
    push<char>(queue, 'H');
    
    cout << "Pushed Queue: ";
    show(queue);
    
    cout << endl << "Poped Queue: " << pop<char>(queue);
    
    cout << endl << "Queue: ";
    show(queue);
    
    return 0;
}
