#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> unique_registrations;  // Set to store unique registration numbers

    for (int i = 0; i < N; i++) {
        int registration;
        cin >> registration;
        unique_registrations.insert(registration);  // Insert each registration into the set
    }

    // Output the number of unique registration numbers
    cout << unique_registrations.size() << endl;

    return 0;
}


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     vector<bool> seen(1000001, false);  // Boolean array to track seen registration numbers
//     int unique_count = 0;

//     for (int i = 0; i < N; i++) {
//         int registration;
//         cin >> registration;

//         // If this registration number has not been seen before, count it
//         if (!seen[registration]) {
//             unique_count++;
//             seen[registration] = true;  // Mark it as seen
//         }
//     }

//     // Output the number of unique registration numbers
//     cout << unique_count << endl;

//     return 0;
// }