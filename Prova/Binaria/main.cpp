#include <iostream>
#include <string>
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

struct Aluno
{
    string nome;
    int matricula;
};

int main()
{
    Aluno alunos[100];
    int i = 0;
    string temp;

    while (true)
    {
        cout << "Nome (ou 'fim' para terminar): ";
        getline(cin >> ws, temp);
        if (temp == "fim")
            break;
        alunos[i].nome = temp;
        cin >> alunos[i].matricula;
        i++;
    }

    return 0;
}