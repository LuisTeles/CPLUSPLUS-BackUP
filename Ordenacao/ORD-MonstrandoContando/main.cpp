#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    int contador = 0;
    bool troca;
    for (int i = 0; i < n - 1; i++) {
        troca = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Realiza a troca
                int trab = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = trab;
                troca = true;
                contador++;
                cout << "New trab:" << trab << endl;
            }
        }
        // Se não houve troca nesta iteração, o array já está ordenado
        if (!troca) {
            break;
        }
    }
    cout << "Contador:" << contador << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[101];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    return 0;
}