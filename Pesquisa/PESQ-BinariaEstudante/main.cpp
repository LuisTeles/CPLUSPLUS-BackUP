#include <iostream>
using namespace std;

// Função de busca binária fornecida
int binaria(int vetor[], int tamanho, int x)
{
    bool achou;
    int baixo, meio, alto;

    baixo = 0;
    alto = tamanho - 1;
    achou = false;
    while ((baixo <= alto) && (achou == false))
    {
        meio = (baixo + alto) / 2;
        if (x < vetor[meio])
            alto = meio - 1;
        else if (x > vetor[meio])
            baixo = meio + 1;
        else
            achou = true;
    }
    if (achou)
        return meio;
    else
        return -1;
}

int main()
{
    int n;
    int vet[10000];
    int x;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    cin >> x;

    int pos;
    pos = binaria(vet, n, x);

    if (pos != -1)
    {
        cout << "Corredor " << pos << endl;
    }
    else
    {
        cout << "Nao localizado" << endl;
    }

    return 0;
}
