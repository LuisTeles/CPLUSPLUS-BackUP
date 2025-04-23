#include <iostream>
#include <algorithm>
using namespace std;

int binaria(int vetor[], int tamanho, int x)
{
    bool achou;            // var aux p/ busca
    int baixo, meio, alto; // var aux

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
    int ids[20];
    int tamanho = 0;
    int num;

    while (true)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        if (tamanho < 20)
        {
            ids[tamanho++] = num;
        }
    }

    sort(ids, ids + tamanho);

    int x; // ID para procura
    cin >> x;

    int pos = binaria(ids, tamanho, x);
    if (pos != -1)
    {
        cout << "Possui acesso" << endl;
    }
    else
    {
        cout << "Nao possui acesso" << endl;
    }

    return 0;
}
