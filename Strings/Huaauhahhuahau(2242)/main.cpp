#include <bits/stdc++.h>
using namespace std;

   
bool is_funny_laugh(const string& laugh) {
    // Extract vowels from the laugh
    string vowels = "";
    for (char ch : laugh) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels += ch;
        }
    }

    // Check if the vowels form a palindrome
    int left = 0;
    int right = vowels.size() - 1;
    while (left < right) {
        if (vowels[left] != vowels[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string laugh;
    cin >> laugh;

    // Output result based on whether the laugh is funny or not
    cout << (is_funny_laugh(laugh) ? 'S' : 'N') << '\n';

    return 0;
}