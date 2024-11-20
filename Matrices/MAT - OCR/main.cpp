#include <iostream>

using namespace std;

// Padrões dos números de 0 a 9 em uma matriz 5x3.
int numeros[10][5][3] = {
    {{0,0,0}, {0,1,0}, {0,1,0}, {0,1,0}, {0,0,0}}, // ZERO
    {{1,1,0}, {1,1,0}, {1,1,0}, {1,1,0}, {1,1,0}}, // UM
    {{0,0,0}, {1,1,0}, {0,0,0}, {0,1,1}, {0,0,0}}, // DOIS
    {{0,0,0}, {1,1,0}, {0,0,0}, {1,1,0}, {0,0,0}}, // TRES
    {{0,1,0}, {0,1,0}, {0,0,0}, {1,1,0}, {1,1,0}}, // QUATRO
    {{0,0,0}, {0,1,1}, {0,0,0}, {1,1,0}, {0,0,0}}, // CINCO
    {{0,0,0}, {0,1,1}, {0,0,0}, {0,1,0}, {0,0,0}}, // SEIS
    {{0,0,0}, {1,1,0}, {1,1,0}, {1,1,0}, {1,1,0}}, // SETE
    {{0,0,0}, {0,1,0}, {0,0,0}, {0,1,0}, {0,0,0}}, // OITO
    {{0,0,0}, {0,1,0}, {0,0,0}, {1,1,0}, {1,1,0}}  // NOVE
};

string nomes[] = {"ZERO", "UM", "DOIS", "TRES", "QUATRO", "CINCO", "SEIS", "SETE", "OITO", "NOVE"};

int main() {
    int linha[15];
    
    while (true) {
        bool linhaZeros = true;  
        
        for (int i = 0; i < 15; i++) {
            cin >> linha[i];
            if (linha[i] != 0) {
                linhaZeros = false;
            }
        }

        if (linhaZeros) {
            break;
        }


        for (int i = 0; i < 10; i++) {
            bool match = true;
            

            for (int j = 0; j < 5; j++) {
                for (int k = 0; k < 3; k++) {
                    if (linha[j * 3 + k] != numeros[i][j][k]) {
                        match = false;
                        break;
                    }
                }
                if (!match) break;
            }
            

            if (match) {
                cout << nomes[i] << endl;
                break;
            }
        }
    }

    return 0;
}
