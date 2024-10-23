#include <iostream>
#include <queue> // para usar a fila (queue)
using namespace std;

// Estrutura de um nó da árvore binária
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Função para inserir um nó na árvore binária de busca
Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Função para imprimir a árvore no percurso por nível (BFS)
void bfs(Node* root) {
    if (root == nullptr) return;
    
    queue<Node*> q; // Fila para armazenar os nós
    q.push(root);
    
    bool first = true; // Para controlar os espaços
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        
        if (first) {
            cout << current->data;
            first = false;
        } else {
            cout << " " << current->data;
        }
        
        if (current->left != nullptr) {
            q.push(current->left);
        }
        if (current->right != nullptr) {
            q.push(current->right);
        }
    }
}

int main() {
    int C; // Número de casos de teste
    cin >> C;
    
    for (int test_case = 1; test_case <= C; ++test_case) {
        int N; // Número de elementos da árvore
        cin >> N;
        
        Node* root = nullptr;
        for (int i = 0; i < N; ++i) {
            int val;
            cin >> val;
            root = insert(root, val);
        }
        
        // Imprimir o resultado no formato solicitado
        cout << "Case " << test_case << ":" << endl;
        bfs(root);
        cout << endl << endl; // Linha em branco após cada caso de teste
    }
    
    return 0;
}
