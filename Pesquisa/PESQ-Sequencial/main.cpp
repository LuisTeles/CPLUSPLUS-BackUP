#include <iostream>
using namespace std;

// Função de busca sequencial
int sequencial(int vetor[], int tamanho, int x)
{
    bool achou = false;
    int i = 0;

    while (achou == false && i < tamanho)
        achou = vetor[i++] == x;

    /*
    int sequencial(int vetor[], int tamanho, int x) {
    int i = 0;

    while (i < tamanho) {
        if (vetor[i] == x) {
            return i; // encontrou, retorna a posição
        }
        i++;
    }

    return -1; // não encontrou
    }
    */

    if (achou)
        return (i - 1);
    else
        return -1;
}

int main()
{
    int vet[100];
    int n, i = 0;

    // Lê os valores até encontrar -1
    cin >> n;
    while (n != -1)
    {
        vet[i] = n;
        i++;
        cin >> n;
    }

    // Lê o valor a ser buscado
    int x;
    cin >> x;

    // Chama a função de busca
    int pos = sequencial(vet, i, x);

    // Mostra o resultado
    if (pos != -1)
        cout << x << " encontrado na posicao " << pos << endl;
    else
        cout << x << " nao encontrado" << endl;

    return 0;
}
