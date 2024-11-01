// #include <bits/stdc++.h>
// using namespace std;

// #define MAX 61

// long long fib_sequence[MAX] = {0, 1};  // Initializes F(0) and F(1)
// bool is_calculated[MAX] = {true, true}; // Marks F(0) and F(1) as already calculated

// long long fibonacci(int n) {
//     if (is_calculated[n]) 
//         return fib_sequence[n]; // Returns the stored value if already calculated

//     // Calculates F(n) recursively using the formula F(n) = F(n-1) + F(n-2)
//     fib_sequence[n] = fibonacci(n - 1) + fibonacci(n - 2);
//     is_calculated[n] = true; // Marks F(n) as calculated
//     return fib_sequence[n];
// }

// int main() {
//     int n;
//     // cout << "Enter the value of n to calculate F(n): ";
//     cin >> n;

//     if (n < 0 || n >= MAX) {
//         cout << "Please enter a value of n between 0 and " << MAX - 1 << "." << endl;
//         return 1;
//     }

//     cout << "Fib(" << n << ") = " << fibonacci(n) << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define MAX 61  // Maximum N is 60

// Array to store Fibonacci numbers up to F(60)
unsigned long long fib_sequence[MAX] = {0, 1};  // F(0) = 0, F(1) = 1

// Precompute all Fibonacci numbers from 0 to 60
void precompute_fibonacci() {
    for (int i = 2; i < MAX; i++) {
        fib_sequence[i] = fib_sequence[i - 1] + fib_sequence[i - 2];
    }
}

int main() {
    int T, N;

    // Precompute Fibonacci sequence up to the 60th term
    precompute_fibonacci();

    // Read the number of test cases
    cin >> T;

    while (T--) {
        cin >> N;
        // Output the result in the exact required format
        cout << "Fib(" << N << ") = " << fib_sequence[N] << endl;
    }

    return 0;
}
