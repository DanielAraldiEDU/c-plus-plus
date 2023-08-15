#include <iostream>

#include "main.hpp"

using namespace std;

int main() {
    Lde lde;
    
    initialize(lde);
    
    insert(lde, 'P');
    insert(lde, 'E');
    insert(lde, 'R');
    insert(lde, 'N');
    insert(lde, 'A');
    insert(lde, 'M');
    insert(lde, 'B');
    insert(lde, 'U');
    insert(lde, 'C');
    insert(lde, 'O');

    cout << "List: ";
    show(lde);
    
    cout<< endl << search(lde, 'P');

    // remove(lde, 'A');
    // remove(lde, 'E');
    // remove(lde, 'O');
    // remove(lde, 'U');
    cout << endl << "Removed list: ";
    show(lde);
    
    reset(lde);
    
    return 0;
}
