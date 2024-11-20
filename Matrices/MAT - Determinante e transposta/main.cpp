#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaração da matriz 2x2
    double M[2][2];
    
    // Leitura dos valores da matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> M[i][j];
        }
    }

    // Exibir a matriz original
    cout << fixed << setprecision(4);
    cout << "M = [" << M[0][0] << " " << M[0][1] << " ; " << M[1][0] << " " << M[1][1] << "]" << endl;

    // Cálculo do determinante
    double determinante = (M[0][0] * M[1][1]) - (M[0][1] * M[1][0]);
    cout << "Determinante de M = " << determinante << endl;

    // Exibir a matriz transposta
    cout << "Transposta de M = [" << M[0][0] << " " << M[1][0] << " ; " << M[0][1] << " " << M[1][1] << "]" << endl;

    return 0;
}
