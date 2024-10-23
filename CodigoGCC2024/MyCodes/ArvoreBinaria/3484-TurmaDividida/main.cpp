/*
    this code returns the shortest element in each node of a binary tree

    basic implementation of binary trees
*/

#include <iostream>
using namespace std;

// Structure for the binary tree node
struct Node {
    int height;
    Node* left;
    Node* right;
    
    Node(int h) {
        height = h;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a new node in the binary search tree
Node* insert(Node* root, int height) {
    if (root == nullptr) {
        return new Node(height); // Create a new node if the tree is empty
    }
    
    // Recursively insert based on comparison
    if (height < root->height) {
        root->left = insert(root->left, height);
    } else {
        root->right = insert(root->right, height);
    }
    
    return root;
}

// Function to perform level-order traversal and print the minimum height at each level
void printLevelMin(Node* root) {
    if (root == nullptr) return;
    
    int level = 0;
    Node* queue[250]; // Array used as a queue for level-order traversal
    int front = 0, back = 0;
    
    queue[back++] = root;
    
    while (front < back) {
        int levelSize = back - front;
        int minHeight = 1000; // Start with a high value for comparison
        
        // Process all nodes at the current level
        for (int i = 0; i < levelSize; i++) {
            Node* current = queue[front++];
            
            // Update the minimum height for this level
            if (current->height < minHeight) {
                minHeight = current->height;
            }
            
            // Add left and right children to the queue
            if (current->left != nullptr) {
                queue[back++] = current->left;
            }
            if (current->right != nullptr) {
                queue[back++] = current->right;
            }
        }
        
        // Output the level and its minimum height in the correct format
        cout << level << " " << minHeight << endl;
        level++;
    }
}

int main() {
    int N;
    cin >> N;
    
    Node* root = nullptr;
    
    // Read heights and build the tree
    for (int i = 0; i < N; i++) {
        int height;
        cin >> height;
        root = insert(root, height);
    }
    
    // Perform level-order traversal and output the minimum height at each level
    printLevelMin(root);
    
    return 0;
}
