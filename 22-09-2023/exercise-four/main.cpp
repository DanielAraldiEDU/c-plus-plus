#include <iostream>

using namespace std;

template<typename T>
struct Node {
    T data;
    Node *left = NULL, *right = NULL;
};

template<typename T>
void preFixed(Node<T> *root) {
    if (root == NULL) return;
    cout << root->data << " ";
    if (root->left != NULL) preFixed(root->left);
    if (root->right != NULL) preFixed(root->right);
}

template<typename T>
void innerFixed(Node<T> *root) {
    if (root == NULL) return;
    if (root->left != NULL) innerFixed(root->left);
    cout << root->data << " ";
    innerFixed(root->right);
}

template<typename T>
void posFixed(Node<T> *root) {
    if (root == NULL) return;
    if (root->left != NULL) posFixed(root->left);
    posFixed(root->right);
    cout << root->data << " ";
}

template<typename T>
bool insert(Node<T> *&root, T value) {
    if (root == NULL) {
        root = new Node<T>;
        root->data = value;
        return true;
    }
    if (root->data == value) return false;
    if (root->data > value) return insert(root->left, value);
    else return insert(root->right, value);
}

int main() {
    Node<char> *root;
    
    root = new Node<char>;
    
    insert<char>(root, 'B');
    insert<char>(root, 'A');
    insert<char>(root, 'C');
    
    cout << "Pré Fixed: ";
    preFixed(root);
    
    cout << endl;
    
    cout << "Inner Fixed: ";
    innerFixed(root);
    
    cout << endl;
    
    cout << "Pos Fixed: ";
    posFixed(root);
    
    return 0;
}
