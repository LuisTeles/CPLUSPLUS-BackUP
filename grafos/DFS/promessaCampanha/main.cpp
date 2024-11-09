#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; t++) {
        int N, M;
        cin >> N >> M;
        
        // Criando o grafo
        vector<vector<int>> adj(N + 1);
        for (int i = 0; i < M; i++) {
            int X, Y;
            cin >> X >> Y;
            adj[X].push_back(Y);
            adj[Y].push_back(X);
        }
        
        // Verificando conectividade usando DFS
        vector<bool> visited(N + 1, false);
        int components = 0;
        
        for (int i = 1; i <= N; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited);
                components++;
            }
        }
        
        // Determinando o resultado para o caso atual
        if (components == 1) {
            cout << "Caso #" << t << ": a promessa foi cumprida\n";
        } else {
            cout << "Caso #" << t << ": ainda falta(m) " << (components - 1) << " estrada(s)\n";
        }
    }
    
    return 0;
}
