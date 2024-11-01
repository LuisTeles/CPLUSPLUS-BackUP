#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r, back;
    
    // Lê até o EOF (End Of File)
    while (cin >> n >> r) {
        vector<bool> isBack(n + 1, false); // Marcações para cada voluntário de 1 a N
        for (int i = 0; i < r; i++) {
            cin >> back;
            isBack[back] = true; // Marca os voluntários que retornaram
        }

        bool allReturned = true;
        for (int i = 1; i <= n; i++) {
            if (!isBack[i]) {  // Se o voluntário não retornou
                cout << i << " ";
                allReturned = false;
            }
        }

        // Verifica se todos retornaram
        if (allReturned) {
            cout << "*";
        }

        cout << endl;  // Nova linha após cada caso de teste
    }
    
    return 0;
}
