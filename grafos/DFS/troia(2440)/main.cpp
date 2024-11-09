#include <iostream>
#include <vector>
using namespace std;

// Function to perform DFS and mark all nodes in the current family (connected component)
void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    // Mark the current node as visited
    visited[node] = true;
    
    // Traverse all nodes connected to this node
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited); // Recursive call for unvisited neighbors
        }
    }
}

int main() {
    int N, M; // N = number of people, M = number of relationships
    cin >> N >> M;
    
    // Adjacency list to store the graph where each index represents a person
    vector<vector<int>> adj(N + 1); // Use N+1 to make indexing easier (1 to N)
    
    // Reading M pairs of relationships and building the graph
    for (int i = 0; i < M; i++) {
        int person1, person2;
        cin >> person1 >> person2;
        
        // Add an undirected edge between person1 and person2
        adj[person1].push_back(person2);
        adj[person2].push_back(person1);
    }
    
    // Vector to keep track of visited nodes
    vector<bool> visited(N + 1, false);
    int familyCount = 0; // To count the number of families (connected components)
    
    // Go through each person to find all families
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            // Start a DFS for a new family if the person hasn't been visited
            dfs(i, adj, visited);
            familyCount++; // Increment the family count for each new component found
        }
    }
    
    // Output the number of distinct families
    cout << familyCount << endl;
    
    return 0;
}
