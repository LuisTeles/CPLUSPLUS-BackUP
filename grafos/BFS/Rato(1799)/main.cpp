#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <string>
#include <vector>
using namespace std;

// Function to perform BFS and find the shortest path from a start node to a target node
int bfs(const string& start, const string& target, unordered_map<string, vector<string>>& adj) {
    // Queue for BFS, storing the current node and the distance from the start node
    queue<pair<string, int>> q;
    q.push({start, 0});
    
    // Set to keep track of visited nodes
    unordered_set<string> visited;
    visited.insert(start);
    
    while (!q.empty()) {
        auto [node, distance] = q.front();
        q.pop();
        
        // If we reach the target node, return the distance (shortest path length)
        if (node == target) return distance;
        
        // Explore all neighboring nodes
        for (const string& neighbor : adj[node]) {
            if (!visited.count(neighbor)) {
                visited.insert(neighbor);
                q.push({neighbor, distance + 1}); // Push neighbor with updated distance
            }
        }
    }
    
    // If there is no path to the target, return a large number (or handle appropriately)
    return -1; // This case should not happen with the problem constraints
}

int main() {
    int points, connections;
    cin >> points >> connections;
    
    unordered_map<string, vector<string>> adj; // Adjacency list to represent the maze graph
    
    // Read each connection and build the adjacency list
    for (int i = 0; i < connections; ++i) {
        string point1, point2;
        cin >> point1 >> point2;
        
        // Since it's an undirected connection, add edges in both directions
        adj[point1].push_back(point2);
        adj[point2].push_back(point1);
    }
    
    // Perform BFS from Entrada to the cheese (*) and then from * to Saida
    int toCheese = bfs("Entrada", "*", adj);
    int toExit = bfs("*", "Saida", adj);
    
    // Output the sum of the shortest paths
    cout << (toCheese + toExit) << endl;
    
    return 0;
}
