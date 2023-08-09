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

void initialize(Lue &list) {
    list.start = NULL;
    list.end = NULL;
}

int main() {
    Lue list;
    
    initialize(list);
    
    return 0;
}
