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

int couter(Node *root, int length = 0) {
    length++;
    if (root == NULL) return length;
    if (root->left != NULL) length = couter(root->left, length);
    if (root->right != NULL) length = couter(root->right, length);
    return length;
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
    
    return 0;
}
