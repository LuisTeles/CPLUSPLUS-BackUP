#include <iostream>
using namespace std;

int main() {
    int numeros[101];
    int n, entrada;
    int i = 0;
    bool saida = false;

    // Entrada
    while (cin >> entrada && entrada != 0) {
        numeros[i++] = entrada;
    }

    cin >> n;

    // Operação de busca
    for (int j = 0; j < i; j++) {
        if (numeros[j] == n) {
            cout << "Elemento " << n << " encontrado na posicao " << j + 1 << endl;
            saida = true;
            break;  // Para ao encontrar
        }
    }

    // Saída
    if (!saida) {
        cout << "Elemento " << n << " nao foi encontrado" << endl;
    }

    return 0;
}
