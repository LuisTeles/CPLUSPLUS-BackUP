#include <iostream>
using namespace std;

int main() {
    double tempos[100]; // Array para armazenar os tempos dos corredores
    int indices[100];   // Array para armazenar os índices originais dos corredores
    int n = 0;          // Contador para o número de corredores
    double tempo;

    // Entrada dos tempos, terminada por -1
    while (cin >> tempo && tempo != -1) {
        tempos[n] = tempo;     // Armazena o tempo do corredor
        indices[n] = n;        // Armazena o índice do corredor
        n++;
    }

    // Ordenação por seleção (Selection Sort)
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (tempos[j] < tempos[minIndex]) {
                minIndex = j;
            }
        }

        // Troca os tempos
        double temp = tempos[i];
        tempos[i] = tempos[minIndex];
        tempos[minIndex] = temp;

        // Troca os índices correspondentes
        int tempIndex = indices[i];
        indices[i] = indices[minIndex];
        indices[minIndex] = tempIndex;
    }

    // Saída da classificação
    cout << "Classificacao:" << endl;
    for (int i = 0; i < n; i++) {
        cout << indices[i] << endl; // Mostra o índice original do corredor
    }

    return 0;
}

/*

#include <iostream>
#include <vector>
#include <algorithm> // para usar sort()
using namespace std;

int main() {
    vector<pair<double, int>> corredores; // Para armazenar tempos e seus índices
    double tempo;
    int index = 0;

    // Entrada dos tempos, terminada por -1
    while (cin >> tempo && tempo != -1) {
        corredores.push_back({tempo, index});
        index++;
    }

    // Ordena os tempos dos corredores (menor tempo primeiro)
    sort(corredores.begin(), corredores.end());

    // Saída da classificação
    cout << "Classificacao:" << endl;
    for (int i = 0; i < corredores.size(); i++) {
        cout << corredores[i].second << endl; // Mostra o índice do corredor na ordem
    }

    return 0;
}


*/
