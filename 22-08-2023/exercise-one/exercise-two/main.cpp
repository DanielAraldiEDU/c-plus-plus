
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
bool pop(Stack<T> &stack, T &value) {
    if (stack.topLevel < 0) return false;
    
    value = stack.array[stack.topLevel];
    stack.topLevel--;
    return true;
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

template<typename T>
bool prime(Stack<T> &stack, int value) {
    if (value < 1) return false;
    
    int auxiliarValue = value, divideValue = 2;
    
    while (auxiliarValue > 1) {
        if (auxiliarValue % divideValue == 0) {
            push<int>(stack, divideValue);
            auxiliarValue = auxiliarValue / divideValue;
        } else {
            divideValue++;
        }
    }
    
    return true;
}


int main() {
    Stack<int> stack, otherStack, anotherStack;
    
    initialize(stack);
    initialize(otherStack);
    initialize(anotherStack);
    
    push<int>(stack, 69);
    push<int>(stack, 42);
    push<int>(stack, 1);
    
    push<int>(otherStack, 77);
    push<int>(otherStack, 23);
    push<int>(otherStack, 10);
    push<int>(otherStack, 7);
    
    cout << "Pushed Stack: ";
    show(stack);
    cout << endl;
    
    cout << "Other Stack: ";
    show(otherStack);
    
    int value;
    pop<int>(stack, value);
    cout << endl << "Poped Stack: " << value;
    
    cout << endl << "Stack: ";
    show(stack);
    
    prime(anotherStack, 360);
    cout << endl << "Prime Stack: ";
    show(anotherStack);
    
    return 0;
}
