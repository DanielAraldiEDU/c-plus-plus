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

template<typename T>
T searchBiggest(Node<T> *root) {
    if (root->right != NULL) return searchBiggest(root->right);
    return root->data;
}

template<typename T>
bool remove(Node<T> *&root, T value) {
    if (root == NULL) return false;
    if (root->data == value) {
        Node<T> *auxiliarRoot = root;
        if (root->left == NULL && root->right == NULL) {
            root = NULL;
            delete auxiliarRoot;
            return true;
        }
        if (root->left == NULL && root->right != NULL) {
            root = root->right;
            delete auxiliarRoot;
            return true;
        }
        if (root->left != NULL && root->right == NULL) {
            root = root->left;
            delete auxiliarRoot;
            return true;
        }
        
        T auxiliarData = searchBiggest(root->left);
        root->data = auxiliarData;
        return remove(root->left, auxiliarData);
    }
    if (value < root->data) return remove(root->left, value);
    else return remove(root->right, value);
}

int main() {
    Node<char> *root;
    
    root = new Node<char>;
    
    insert<char>(root, 'P');
    insert<char>(root, 'E');
    insert<char>(root, 'R');
    insert<char>(root, 'N');
    insert<char>(root, 'A');
    insert<char>(root, 'M');
    insert<char>(root, 'B');
    insert<char>(root, 'U');
    insert<char>(root, 'C');
    insert<char>(root, 'O');
    
    cout << "Pré Fixed: ";
    preFixed(root);
    
    cout << endl;
    
    cout << "Inner Fixed: ";
    innerFixed(root);
    
    cout << endl;
    
    cout << "Pos Fixed: ";
    posFixed(root);
    
    cout << "\n\n";
    
    const bool isRemoved = remove(root, 'P');
    cout << "P character is removed: " << (isRemoved ? "true" : "false");
    
    cout << "\n\n";
    
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
