#include <iostream>
#include <iomanip> // para definir a precisão da saída
using namespace std;

int main() {
    int N;
    
    // Entrada do número de casos
    cin >> N;
    
    // Vetores de entrada
    int X[1001], Y[1001];
    char Op[1001];
    
    // Entrada dos valores do vetor X
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }
    
    // Entrada dos valores do vetor Y
    for (int i = 0; i < N; i++) {
        cin >> Y[i];
    }
    
    // Entrada dos operadores
    for (int i = 0; i < N; i++) {
        cin >> Op[i];
    }
    
    // Processamento e saída
    for (int i = 0; i < N; i++) {
        // Identifica a operação
        if (Op[i] == '+') {
            cout << X[i] << " + " << Y[i] << " = " << X[i] + Y[i] << endl;
        }
        else if (Op[i] == '-') {
            cout << X[i] << " - " << Y[i] << " = " << X[i] - Y[i] << endl;
        }
        else if (Op[i] == '*') {
            cout << X[i] << " * " << Y[i] << " = " << X[i] * Y[i] << endl;
        }
        else if (Op[i] == '/') {
            if (Y[i] != 0) {
                // Para divisões, exibe o resultado com 2 casas decimais
                cout << X[i] << " / " << Y[i] << " = " << fixed << setprecision(2) << (float)X[i] / Y[i] << endl;
            } else {
                cout << "Divisão por zero não permitida!" << endl;
            }
        }
    }
    
    return 0;
}