Resolva o seguinte problema:

    A Robélia, chefe das secretárias do Inatel está querendo organizar o registro acadêmico dos alunos, e pediu para você ajudá-la.

    Ela precisa de um sistema de armazene o nome de cada aluno, bem como seu curso e número de matrícula. Depois ela quer digitar o nome de um aluno, e o sistema deve retornar o curso e o nome de matrícula deste aluno.

    Será que você consegue ajudá-la?
    Entrada
    A entrada consiste de várias linhas:

    - a primeira irá conter um único número inteiro N (1<=N<=10000), que indica a quantidade de alunos;

    - Para cada aluno, será digitadas três linhas:

    - a primeira irá conter o nome do aluno;

    - segunda, o seu curso;

    - a terceira, seu número de matrícula.

    A última entrada será o nome do aluno a ser consultado.

    Saída
    Na saída, o programa deve mostrar o nome do aluno, seu número de matrícula e curso do aluno. Se o aluno não for encontrado, seu programa deve mostrar a mensagem "Aluno nao encontrado".

    DICA: armazene os dados de cada aluno em um vetor de structs.

    | Entrada                                                                 | Saída                          |
    |-------------------------------------------------------------------------|--------------------------------|
    | 4                                                                       |                                |
    | Jose Carlos                                                             |                                |
    | Biomedica                                                               |                                |
    | 335                                                                     |                                |
    | Maria Antonia                                                           |                                |
    | Telecom                                                                 |                                |
    | 10347                                                                   |                                |
    | Marcela Araujo                                                          |                                |
    | Software                                                                |                                |
    | 112                                                                     |                                |
    | Andre de Souza                                                          |                                |
    | Automacao                                                               |                                |
    | 543                                                                     |                                |
    | Marcela Araujo                                                          | Marcela Araujo                |
    |                                                                         | Software                      |
    |                                                                         | 112                            |
    |                                                                         |                                |
    | 4                                                                       |                                |
    | Jose Carlos                                                             |                                |
    | Biomedica                                                               |                                |
    | 335                                                                     |                                |
    | Maria Antonia                                                           |                                |
    | Telecom                                                                 |                                |
    | 10347                                                                   |                                |
    | Marcela Araujo                                                          |                                |
    | Software                                                                |                                |
    | 112                                                                     |                                |
    | Andre de Souza                                                          |                                |
    | Automacao                                                               |                                |
    | 543                                                                     |                                |
    | Jesse Rodrigues                                                         | Aluno nao localizado          |

Voce deve usar o seguinte template:

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
        
        return 0;
    }

