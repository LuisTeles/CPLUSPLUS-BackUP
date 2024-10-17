#include <iostream>
using namespace std;
/*
    Nota para funcionamento de um for loop:
        o loop for é declarado da seguinte forma for ("declaração da função"; "condição de funcionamento"; "incrementação unitária")

        este tipo de sintaxe pode ser mudada de acordo com a necessidade, por exemplo a parte de declaração(int i) pode ser deixada fora do for loop
*/

    // Este código implementa uma versão simplificada de um "bubble Sorting algorithm" para organizar números em ordem crescente    
    // OBS: existem bibliotecas que fazem este trabalho, código escrito para entender a base e estrutura de loops em c++

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n -1; i++) { // controla quantas vezes o código é verificado e não permite fazer loops desnecessário depois que os dados estejam completamente organizados
        
        for (int j = 0; j < n - i - 1; j++) { // garante que a operação aconteça de verdade j é responsável por realmente indexar o array e nao permite que a operação aconteça mais do que necessário
            
            if (arr[j] > arr[j + 1]) { // se o numero da esquerda for maior que o numero da esquerda inverte suas posições
                
                swap(arr[j], arr[j + 1]); // troca as posições
            } 
        }  
    }
}

void printArray(int arr[], int size){ // função para printar os números um depois do outro
    for (int i = 0; i < size; i++){// loop para todos os elementos do array
        cout << arr[i] << endl;// faz o print do numero atual e quebra a linha
    }

    cout << endl;
}

int main() {
    int elemento1;
    int elemento2;
    int elemento3;

    cin >> elemento1 >> elemento2 >> elemento3; // entrada dos elementos do array
    int arr[] = {elemento1, elemento2, elemento3,};// grava os elementos no array

    int n = sizeof(arr) / sizeof(arr[0]); // Calcula o numero de elementos dentro do array    


    bubbleSort(arr, n);// roda a função de organização de elementos 

    // cout << arr << endl;

    printArray(arr, n); // printa os resultados depois de organizados

    cout << elemento1 << endl << elemento2 << endl << elemento3 << endl; // printa os resultados antes de organiza-los
    
    return 0;
}

/*
The line for (int j = 0; j < n - i - 1; j++) is a nested loop within the main for (int i = 0; i < n - 1; i++) loop. This nested loop is responsible for comparing and potentially swapping adjacent elements in the array to achieve the sorting order. Let's break down what each part of this line does:

int j = 0;: This initializes the loop variable j to 0 at the beginning of each iteration of the outer loop (controlled by i). j is used to index into the array and compare adjacent elements.

j < n - i - 1;: This is the condition that must be true for the loop to continue executing. n is the size of the array, i is the current iteration of the outer loop, and subtracting i from n and then subtracting 1 ensures that the inner loop does not attempt to access elements that are already in their correct positions at the end of the array. As i increases (i.e., as we progress through the outer loop), fewer elements need to be compared because the largest elements are being moved to the end of the array in each pass.

j++: This increments j by 1 after each iteration of the inner loop, allowing the loop to move to the next pair of adjacent elements for comparison.

Regarding your question about what j stands for: j is simply a loop variable used within the inner loop to iterate over the array elements. It represents the current index of the element being compared to its next neighbor in the array. In the context of the bubble sort algorithm, j is used to compare each pair of adjacent elements (arr[j] and arr[j + 1]) and swap them if they are out of order, thereby moving the larger element towards the end of the array.

In summary, the line for (int j = 0; j < n - i - 1; j++) controls the inner loop that iterates over the array elements, comparing and potentially swapping adjacent elements to sort the array in ascending order. The subtraction of i from n - 1 ensures that the number of comparisons decreases with each pass of the outer loop, optimizing the sorting process.


 */