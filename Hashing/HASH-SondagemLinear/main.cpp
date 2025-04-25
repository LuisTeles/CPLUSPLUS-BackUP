#include <iostream>
using namespace std;


struct dado {
    int k;      // chave
    int status; // 1 se a posição está ocupada, -1 se a posição está vazia
};

// Função de hash para calcular o índice com sondagem linear
int h(int k, int i, int m) {
    return (k + i) % m;  // Fórmula simples de sondagem linear
}

// Função de inserção com sondagem linear
int hash_insert(dado t[], int m, int k) {
    int i = 0;  // Começa tentando inserir na posição inicial
    do {
        int j = h(k, i, m);  // Calcula o índice usando a função de hash
        if (t[j].status != 1) {  // Se a posição está vazia (não ocupada)
            t[j].k = k;         // Insere a chave
            t[j].status = 1;    // Marca a posição como ocupada
            return j;           // Retorna o índice onde a chave foi inserida
        } else {
            i++;  // Se a posição está ocupada, tenta na próxima posição
        }
    } while (i != m);  // Se não conseguir inserir após m tentativas

    return -1;  // Retorna -1 se não conseguir inserir
}

int main() {
    int m;
    cin >> m;  // Lê o tamanho da tabela

    dado t[101];  // Cria a tabela de tamanho m

    // Inicializa todas as posições da tabela como vazias (-1)
    for (int i = 0; i < m; i++) {
        t[i].k = -1;  // Chave vazia
        t[i].status = -1;  // Status indicando posição vazia
    }

    // Lê as chaves a serem inseridas
    int k;
    while (cin >> k && k != 0) {  // Lê até o valor 0
        hash_insert(t, m, k);  // Insere a chave na tabela
    }

    // Exibe a tabela após as inserções
    for (int i = 0; i < m; i++) {
        if (t[i].status == 1) {
            cout << t[i].k << " ";  // Exibe a chave se a posição estiver ocupada
        } else {
            cout << "-1 ";  // Exibe -1 se a posição estiver vazia
        }
    }
    cout << endl;

    return 0;
}
