#include <iostream>
using namespace std;

string toUpperCaseCustom(string str) {
    for (int i = 0; i < str.length(); i++) {
        // Check if the character is a lowercase letter (ASCII values from 97 to 122)
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from the ASCII value
            str[i] = str[i] - 32;
        }
    }
    return str;
}

void customSort(string arr[], int size) {
    // Implementing a simple bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the words if they are in the wrong order
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    string palavra1, palavra2, palavra3;
    
    // Input the words
    getline(cin >> ws, palavra1);
    getline(cin >> ws, palavra2);
    getline(cin >> ws, palavra3);
    
    // palavra1 = toUpperCaseCustom(palavra1);
    // palavra2 = toUpperCaseCustom(palavra2);
    // palavra3 = toUpperCaseCustom(palavra3);

    // Store words in an array
    string words[] = {palavra1, palavra2, palavra3};

    // Sort the array using custom sort
    customSort(words, 3);

    // Print the sorted words in the exact expected format
    cout << words[0] << " " << words[1] << " " << words[2] << endl;

    return 0;
}
