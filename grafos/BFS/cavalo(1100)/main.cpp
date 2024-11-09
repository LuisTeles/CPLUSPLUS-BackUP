#include <iostream>
#include <queue>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

// Directions representing all possible knight moves
const vector<pair<int, int>> directions = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};

// Convert chess notation (e.g., "e2") to a pair of coordinates
pair<int, int> toCoordinates(const string& pos) {
    int x = pos[0] - 'a';   // Column 'a'-'h' becomes 0-7
    int y = pos[1] - '1';    // Row '1'-'8' becomes 0-7
    return {x, y};
}

// BFS function to find the minimum knight moves between two positions
int bfs(const pair<int, int>& start, const pair<int, int>& target) {
    if (start == target) return 0; // If already at target, 0 moves needed

    queue<pair<pair<int, int>, int>> q; // Queue of (position, moves)
    q.push({start, 0});

    bool visited[8][8] = {}; // 8x8 board to mark visited positions
    visited[start.first][start.second] = true;

    while (!q.empty()) {
        auto [current, moves] = q.front();
        q.pop();

        for (const auto& dir : directions) {
            int nx = current.first + dir.first;
            int ny = current.second + dir.second;

            // Check if the new position is within the bounds of the chessboard
            if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && !visited[nx][ny]) {
                if (make_pair(nx, ny) == target) {
                    return moves + 1; // Target reached
                }

                // Mark position as visited and add to the queue
                visited[nx][ny] = true;
                q.push({{nx, ny}, moves + 1});
            }
        }
    }

    return -1; // In case there's no valid path, though this shouldn't happen
}

int main() {
    string start, target;
    
    // Process each test case until end of input
    while (cin >> start >> target) {
        pair<int, int> startPos = toCoordinates(start);
        pair<int, int> targetPos = toCoordinates(target);

        int moves = bfs(startPos, targetPos);

        cout << "To get from " << start << " to " << target << " takes " << moves << " knight moves." << endl;
    }

    return 0;
}
