#include <iostream>
using namespace std;

void insercaoDireta(int vetor[], int tamanho){
    int i, j;
    int chave;
    
    for(j = 1; j < tamanho; j++){
        chave = vetor[j];
        i = j - 1;
        
        //while ((i >= 0) && (vetor[i] > chave))  // crescente
        //while ((i >= 0) && (vetor[i] < chave))  // decrescente
        while ((i >= 0) && (vetor[i] < chave)){
            vetor[i + 1] = vetor[i];
            i--;
        }
        vetor[i + 1] = chave;
    }
}

int main(){
    int nums;
    int vet[101];
    int i = 0;
    
    cin >> nums;
    while(nums != 0){
        vet[i] = nums;
        i++;
        cin >> nums;
    }

    insercaoDireta(vet, i);
    
    for(int j = 0; j < i; j++){
        cout << vet[j] << " ";
    }
    cout << endl;

    return 0;
}
