#include <iostream>
using namespace std;

int hash_aux(int k, int m) {
    if (k != 0 && m == 0) {
        return 0;  
    } else if (k % m < 0) {
        return k % m + m;  
    } else {
        return k % m;  
    }
}

int hash1(int k, int i, int m) {
    return (hash_aux(k, m) + i) % m;  
}

int main() {
    int k, m;
    cin >> k >> m;

    for (int i = 0; i < m; i++) { 
        cout << hash1(k, i, m) << " ";
    }

    return 0;
}
