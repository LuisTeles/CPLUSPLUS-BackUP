#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform binary search to find the first occurrence
int find_first_occurrence(const vector<int>& marbles, int query) {
    int left = 0, right = marbles.size() - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (marbles[mid] == query) {
            result = mid;
            right = mid - 1; // Continue searching to the left for the first occurrence
        } else if (marbles[mid] < query) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int N, Q, case_number = 1;
    while (cin >> N >> Q && (N != 0 || Q != 0)) {
        vector<int> marbles(N);
        
        for (int i = 0; i < N; i++) {
            cin >> marbles[i];
        }

        // Sort marbles for binary search
        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << case_number++ << ":\n";
        while (Q--) {
            int query;
            cin >> query;
            
            // Find the first occurrence of the queried marble
            int pos = find_first_occurrence(marbles, query);
            if (pos != -1) {
                cout << query << " found at " << pos + 1 << "\n";
            } else {
                cout << query << " not found\n";
            }
        }
    }

    return 0;
}
