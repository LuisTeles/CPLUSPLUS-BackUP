#include <iostream>
#include <map>
using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        int N = stoi(line);  // Read the number of boots
        map<int, int> left_counts;   // Map to count left boots
        map<int, int> right_counts;  // Map to count right boots

        for (int i = 0; i < N; i++) {
            int size;
            char foot;
            cin >> size >> foot;

            if (foot == 'D') {
                right_counts[size]++;
            } else if (foot == 'E') {
                left_counts[size]++;
            }
        }
        cin.ignore(); // Ignore the newline after the last input

        int total_pairs = 0;

        // Count pairs for each size
        for (auto& left : left_counts) {
            int size = left.first;
            int left_count = left.second;
            int right_count = right_counts[size];

            total_pairs += min(left_count, right_count);
        }

        cout << total_pairs << endl;  // Output the result for this case
    }

    return 0;
}
