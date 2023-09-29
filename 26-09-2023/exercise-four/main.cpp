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
    if (value < root->data) return insert(root->left, value);
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

template<typename T>
int counter(Node<T> *root) {
    if (root == NULL) return 0;
    return 1 + counter(root->left) + counter(root->right);
}

template<typename T>
int counterSheets(Node<T> *root) {
    if (root == NULL) return 0;
    if (root->right == NULL && root->left == NULL) return 1;
    return counterSheets(root->right) + counterSheets(root->left);
}

template<typename T>
bool isEqual(Node<T> *root, Node<T> *rootCompare) {
    if (root == NULL || rootCompare == NULL) return false;
    if (root->left != NULL && rootCompare->left != NULL) isEqual(root->left, rootCompare->left);
    if (root->right != NULL && rootCompare->right != NULL) isEqual(root->right, rootCompare->right);
    return root->data == rootCompare->data;
}

int main() {
    Node<char> *root = NULL;
    Node<char> *otherRoot = NULL;
    
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
    
    insert<char>(otherRoot, 'P');
    insert<char>(otherRoot, 'E');
    insert<char>(otherRoot, 'R');
    insert<char>(otherRoot, 'N');
    insert<char>(otherRoot, 'A');
    insert<char>(otherRoot, 'M');
    insert<char>(otherRoot, 'B');
    insert<char>(otherRoot, 'U');
    insert<char>(otherRoot, 'C');
    insert<char>(otherRoot, 'O');
    
    cout << "Pré Fixed: ";
    preFixed(root);
    
    cout << endl;
    
    cout << "Inner Fixed: ";
    innerFixed(root);
    
    cout << endl;
    
    cout << "Pos Fixed: ";
    posFixed(root);
    
    cout << "\n\n";
    
    cout << "Amount nodes: " << counter(root) << endl;
    cout << "Amount nodes sheets: " << counterSheets(root) << endl;
    cout << "The trees is equal: " << (isEqual(root, otherRoot) ? "true" : "false") << endl;
    cout << "P character is removed: " << (remove(root, 'P') ? "true" : "false") << endl;
    cout << "The trees is equal: " << (isEqual(root, otherRoot) ? "true" : "false");
    
    return 0;
}
