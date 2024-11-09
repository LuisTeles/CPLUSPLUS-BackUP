#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

double calcular_area_cortada(const vector<int>& tiras, double altura) {
    double area = 0;
    for (int comprimento : tiras) {
        if (comprimento > altura) {
            area += comprimento - altura;
        }
    }
    return area;
}

int main() {
    while (true) {
        int N, A;
        cin >> N >> A;
        
        if (N == 0 && A == 0) break;
        
        vector<int> tiras(N);
        int soma_total = 0;
        for (int i = 0; i < N; ++i) {
            cin >> tiras[i];
            soma_total += tiras[i];
        }

        if (soma_total == A) {
            cout << ":D\n";
        } else if (soma_total < A) {
            cout << "-.-\n";
        } else {
            // Realizar a busca binária com maior precisão
            double low = 0, high = 10000, mid;
            while (high - low > 1e-6) { // Mais precisão para a busca binária
                mid = (low + high) / 2;
                double area_cortada = calcular_area_cortada(tiras, mid);
                
                if (area_cortada == A) {
                    break;
                } else if (area_cortada < A) {
                    high = mid; // Cortar mais alto
                } else {
                    low = mid; // Cortar mais baixo
                }
            }
            
            // Arredondar e formatar a saída para garantir precisão de 4 casas decimais
            double resultado = round(mid * 10000) / 10000.0; // Arredondar para 4 casas decimais
            cout << fixed << setprecision(4) << resultado << "\n";
        }
    }
    return 0;
}
