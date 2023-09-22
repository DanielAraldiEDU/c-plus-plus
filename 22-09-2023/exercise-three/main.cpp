#include <iostream>

using namespace std;

struct Node {
    char data;
    Node *left = NULL, *right = NULL;
};

void preFixed(Node *root) {
    if (root == NULL) return;
    cout << root->data << " ";
    if (root->left != NULL) preFixed(root->left);
    if (root->right != NULL) preFixed(root->right);
}

void innerFixed(Node *root) {
    if (root == NULL) return;
    if (root->left != NULL) innerFixed(root->left);
    cout << root->data << " ";
    innerFixed(root->right);
}

void posFixed(Node *root) {
    if (root == NULL) return;
    if (root->left != NULL) posFixed(root->left);
    posFixed(root->right);
    cout << root->data << " ";
}

int couter(Node *root) {
    if (root == NULL) return 0;
    return 1 + couter(root->left) + couter(root->right);
}

bool search(Node *root, char value) {
    if (root == NULL) return false;
    if (root->data == value) return true;
    return search(root->left, value) || search(root->right, value);
}

void remove(Node *root) {
    if (root == NULL) return;
    remove(root->left);
    remove(root->right);
    delete root;
}

int main() {
    Node *root, *node1, *node2, *node3, *node4;
    
    root = new Node;
    root->data = 'B';
    node1 = new Node;
    node1->data = 'A';
    node2 = new Node;
    node2->data = 'C';
    node3 = new Node;
    node3->data = 'D';
    node4 = new Node;
    node4->data = 'E';
    
    root->left = node1;
    root->right = node2;
    
    node2->left = node3;
    node2->right = node4;
    
    cout << "Pré Fixed: ";
    preFixed(root);
    
    cout << endl;
    
    cout << "Inner Fixed: ";
    innerFixed(root);
    
    cout << endl;
    
    cout << "Pos Fixed: ";
    posFixed(root);
    
    cout << endl;
    
    cout << "Amount Nodes: " << couter(root);
    
    cout << endl;
    
    cout << "Search Node: " << (search(root, 'D') ? "true" : "false");
    
    remove(root);
    
    return 0;
}
