#include <iostream>
using namespace std;

void quickSort(int vetor[], int i, int j) {
    int trab, esq, dir, pivo;

    esq = i;
    dir = j;
    pivo = vetor[(esq + dir) / 2];

    do {
        while (vetor[esq] < pivo)
            esq++;
        while (vetor[dir] > pivo)
            dir--;
        if (esq <= dir) {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
    } while (esq <= dir);

    if (dir > i)
        quickSort(vetor, i, dir);
    if (esq < j)
        quickSort(vetor, esq, j);
}

int main() {
    int vetor[100];
    int n, i = 0;

    cin >> n;
    while (n != -1) {
        vetor[i] = n;
        i++;
        cin >> n;
    }

    quickSort(vetor, 0, i - 1);

    for (int k = 0; k < i; k++)
        cout << vetor[k] << " ";
    cout << endl;

    return 0;
}
