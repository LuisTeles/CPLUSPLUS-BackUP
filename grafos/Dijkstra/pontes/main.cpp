#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

// Structure to represent a bridge with target pillar and number of missing planks (weight)
struct Bridge {
    int target, missing_planks;
    Bridge(int t, int b) : target(t), missing_planks(b) {}
};

// Dijkstra's algorithm to find the minimum missing planks path from start (0) to end (N+1)
int dijkstra(int num_pillars, const vector<vector<Bridge>>& adj) {
    vector<int> min_planks(num_pillars + 2, numeric_limits<int>::max()); // Cost to reach each pillar
    min_planks[0] = 0; // Start at pillar 0 with 0 missing planks

    // Priority queue to process nodes based on the minimum number of missing planks so far
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0}); // {missing planks, pillar}

    while (!pq.empty()) {
        int current_planks = pq.top().first;
        int current_pillar = pq.top().second;
        pq.pop();

        // Skip if this path is no longer the shortest
        if (current_planks > min_planks[current_pillar]) continue;

        // Process each bridge connected to the current pillar
        for (const auto& bridge : adj[current_pillar]) {
            int next_pillar = bridge.target;
            int new_planks = current_planks + bridge.missing_planks;

            // If a shorter path to next_pillar is found, update and add to priority queue
            if (new_planks < min_planks[next_pillar]) {
                min_planks[next_pillar] = new_planks;
                pq.push({new_planks, next_pillar});
            }
        }
    }

    // Return the minimum missing planks needed to reach the destination pillar (N + 1)
    return min_planks[num_pillars + 1];
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<Bridge>> adj(N + 2); // Graph adjacency list with N+2 nodes (0 to N+1)

    // Read in each bridge
    for (int i = 0; i < M; ++i) {
        int S, T, B;
        cin >> S >> T >> B;
        adj[S].emplace_back(T, B);
        adj[T].emplace_back(S, B); // Bridges are bidirectional
    }

    // Run Dijkstra's algorithm from start (0) to end (N+1)
    int result = dijkstra(N, adj);

    // Output the result, which is the minimum number of missing planks
    cout << result << endl;

    return 0;
}
