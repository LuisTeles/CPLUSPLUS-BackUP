#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;              //Numero de alunos
    double soma = 0.0;  //Soma de todas as notas dos alunos
    double media;       //Valor da media a ser calculada
    double notas[1001]; //Array das notas dos alunos
    
    // Leitura do número de alunos
    cin >> N;
    
    
    // Leitura das notas dos alunos e cálculo da soma
    for (int i = 0; i < N; i++) {
        cin >> notas[i];
        soma += notas[i];
    }
    
    // Cálculo da média
    media = soma / N;
    
    // Variáveis para contar os alunos acima e abaixo da média
    int acima_ou_igual_media = 0;
    int abaixo_media = 0;
    
    // Verificação de cada nota em relação à média
    for (int i = 0; i < N; i++) {
        if (notas[i] >= media) {
            acima_ou_igual_media++;
        } else {
            abaixo_media++;
        }
    }
    
    // Exibe a média e os contadores com o formato solicitado
    cout << fixed << setprecision(2) << "Media da turma: " << media << endl;
    cout << "Alunos com nota acima da media: " << acima_ou_igual_media << endl;
    cout << "Alunos com nota abaixo da media: " << abaixo_media << endl;
    
    return 0;
}
