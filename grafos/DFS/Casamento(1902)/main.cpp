#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

// Function to detect a cycle starting from a node and count it as a marriage if found
bool detectCycle(const string& node, unordered_map<string, string>& loves, unordered_set<string>& visited, unordered_set<string>& inCurrentCycle) {
    string current = node;
    
    // Traverse until we either find a cycle or reach a node that does not complete a cycle
    while (true) {
        if (inCurrentCycle.count(current)) {
            // A cycle is detected, meaning a marriage can be formed
            return true;
        }
        if (visited.count(current)) {
            // Node already processed in a previous cycle or non-cycle path
            return false;
        }

        // Mark this node as visited in the current cycle detection
        visited.insert(current);
        inCurrentCycle.insert(current);
        
        // Move to the next person in the "love chain"
        if (loves.count(current) == 0) return false; // If the current person has no love interest, end
        current = loves[current];
    }
}

int main() {
    unordered_map<string, string> loves; // Maps each person to who they are in love with
    
    string a, b;
    while (cin >> a >> b) {
        loves[a] = b; // A is in love with B
    }

    unordered_set<string> visited; // Tracks globally visited nodes to avoid redundant cycle checks
    int marriages = 0; // Counter for the number of possible marriages (cycles found)
    
    // Check each person to find all cycles
    for (const auto& pair : loves) {
        string person = pair.first;
        if (!visited.count(person)) {
            unordered_set<string> inCurrentCycle; // Tracks nodes in the current cycle detection
            if (detectCycle(person, loves, visited, inCurrentCycle)) {
                marriages++; // Increment marriage count if a cycle is found
            }
        }
    }
    
    // Output the number of marriages (cycles) detected
    cout << marriages << endl;

    return 0;
}
