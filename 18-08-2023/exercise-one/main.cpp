#include <iostream>

using namespace std;

#define LENGTH 1000 

template<typename T> 
struct Stack {
    T array[LENGTH];
    int topLevel;
};

template<typename T> 
void initialize(Stack<T> &stack) {
    stack.topLevel = -1;
}

template<typename T>
T pop(Stack<T> &stack) {
    T value;
    if (stack.topLevel < 0) return NULL;
    
    value = stack.array[stack.topLevel];
    stack.topLevel--;
    return value;
}

template<typename T>
void push(Stack<T> &stack, T value) {
    if (stack.topLevel == LENGTH - 1) return;
    stack.topLevel++;
    stack.array[stack.topLevel] = value;
}

template<typename T>
void show(Stack<T> &stack) {
    for (int index = 0; index <= stack.topLevel; index++) {
        cout << stack.array[index] << " ";
    }    
}

int main() {
    Stack<char> stack;
    
    initialize(stack);
    
    push<char>(stack, 'P');
    push<char>(stack, 'U');
    push<char>(stack, 'S');
    push<char>(stack, 'H');
    
    cout << "Pushed Stack: ";
    show(stack);
    
    cout << endl << "Poped Stack: " << pop<char>(stack);
    
    cout << endl << "Stack: ";
    show(stack);
    
    return 0;
}
