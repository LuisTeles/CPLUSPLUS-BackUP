#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    string curso;
    string matricula;
};

int binaria(Aluno vetor[], int tamanho, string x) {
    int baixo = 0;
    int alto = tamanho - 1;
    
    while (baixo <= alto) {
        int meio = (baixo + alto) / 2;
        if (x < vetor[meio].nome) {
            alto = meio - 1;
        } else if (x > vetor[meio].nome) {
            baixo = meio + 1;
        } else {
            return meio;
        }
    }
    return -1;
}

void bubbleSort(Aluno vetor[], int tamanho) {
    int i, j;
    Aluno trab;
    bool troca;
    int limite;
    
    troca = true;
    limite = tamanho - 1;
    while (troca) {
        troca = false;
        for (i = 0; i < limite; i++) {
            if (vetor[i].nome > vetor[i + 1].nome) {
                trab = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = trab;
                j = i;
                troca = true;
            }
        }
        limite = j;
    }
}

int main() {
    int N;
    cin >> N;

    Aluno alunos[10000];

    for (int i = 0; i < N; i++) {
        getline(cin >> ws, alunos[i].nome);
        getline(cin, alunos[i].curso);
        getline(cin, alunos[i].matricula);
    }

    string nomeConsulta;
    getline(cin >> ws, nomeConsulta);

    bubbleSort(alunos, N);

    int indice = binaria(alunos, N, nomeConsulta);

    if (indice != -1) {
        cout << alunos[indice].nome << endl;
        cout << alunos[indice].curso << endl;
        cout << alunos[indice].matricula << endl;
    } else {
        cout << "Aluno nao localizado" << endl;
    }

    return 0;
}