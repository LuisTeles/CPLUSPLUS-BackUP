#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
    
    Node(char val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Insert a node into the BST
Node* insert(Node* root, char val) {
    if (root == nullptr) {
        return new Node(val);
    }
    
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    
    return root;
}

// Helper to print elements with controlled spaces
void printWithSpace(bool &first, char data) {
    if (first) {
        cout << data;
        first = false;
    } else {
        cout << " " << data;
    }
}

// In-order traversal (infix)
void inOrder(Node* root, bool &first) {
    if (root == nullptr) return;
    inOrder(root->left, first);
    printWithSpace(first, root->data);
    inOrder(root->right, first);
}

// Pre-order traversal (prefix)
void preOrder(Node* root, bool &first) {
    if (root == nullptr) return;
    printWithSpace(first, root->data);
    preOrder(root->left, first);
    preOrder(root->right, first);
}

// Post-order traversal (postfix)
void postOrder(Node* root, bool &first) {
    if (root == nullptr) return;
    postOrder(root->left, first);
    postOrder(root->right, first);
    printWithSpace(first, root->data);
}

// Search for an element in the BST
bool search(Node* root, char val) {
    if (root == nullptr) return false;
    
    if (root->data == val) {
        return true;
    } else if (val < root->data) {
        return search(root->left, val);
    } else {
        return search(root->right, val);
    }
}

int main() {
    Node* root = nullptr;
    string command;
    
    while (cin >> command) {
        if (command == "I") {
            char val;
            cin >> val;
            root = insert(root, val);
        } else if (command == "INFIXA") {
            bool first = true;
            inOrder(root, first);
            cout << endl;
        } else if (command == "PREFIXA") {
            bool first = true;
            preOrder(root, first);
            cout << endl;
        } else if (command == "POSFIXA") {
            bool first = true;
            postOrder(root, first);
            cout << endl;
        } else if (command == "P") {
            char val;
            cin >> val;
            if (search(root, val)) {
                cout << val << " existe" << endl;
            } else {
                cout << val << " nao existe" << endl;
            }
        }
    }

    return 0;
}
