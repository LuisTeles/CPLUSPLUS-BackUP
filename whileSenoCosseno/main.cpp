#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Função para encontrar os intervalos onde sin(θ)cos(θ) é positivo
void encontrar_intervalos(double N1, double N2) {
    double incremento = 0.1;            //Variavel para incrmentacao do intevalo 
    bool emIntervalo = false;           //Controla se o valor do inrvalo vai terinar exatamente no final de N2
    double inicio_intervalo = 0.0;      //Primeiro valor do intervalo de saida

    double theta = N1;

    // Usamos o loop while para percorrer os valores de θ
    while (theta <= N2) {
        double valor = sin(theta) * cos(theta);

        // Se sin(θ)cos(θ) é positivo
        if (valor > 0) {
            if (!emIntervalo) {
                // Início de um novo intervalo
                inicio_intervalo = theta;
                emIntervalo = true;
            }
        } else {
            // Se o valor deixa de ser positivo e estávamos em um intervalo
            if (emIntervalo) {
                // Imprimir o intervalo
                cout << fixed << setprecision(1) << inicio_intervalo << " a " << (theta - incremento) << endl;
                emIntervalo = false;
            }
        }

        // Incremento de theta
        theta += incremento;
    }

    // Caso o último intervalo termine exatamente no final de N2
    if (emIntervalo) {
        cout << fixed << setprecision(1) << inicio_intervalo << " a " << N2 << endl;
    }
}

// Função principal
int main() {
    double N1, N2;

    // Leitura dos valores N1 e N2
    cin >> N1 >> N2;

    // Encontra e imprime os intervalos onde sin(θ)cos(θ) é positivo
    encontrar_intervalos(N1, N2);

    return 0;
}
