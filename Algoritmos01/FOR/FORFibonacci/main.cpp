#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;                      //variável que dita o numero de ciclos do for loop
    int i;                      //variável de incrementação
    int valorInicial=0;         //valor que começa a sequencia de Fibonacci
    int valorSecundario=1;      //valor que sucede o valor inicial
    int somaDosValores;         //variável que soma os dois valores anteriores

    //ler o valor n que dita quantos elementos da sequencia serão imprimidos na saída
    cin >> n;
    cout << valorInicial << " ";
    for(i = 0; i < n - 1 ; i++){
        //imprime a sequencia
        cout << valorSecundario << " ";
        //soma dos valores da sequencia
        somaDosValores = valorInicial + valorSecundario;
        //inversão das posições da sequencia 
        valorInicial = valorSecundario;
        valorSecundario = somaDosValores;
    }
    cout << endl;
    
    //imprimir todos os numero da sequencia
    return 0;
}