#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;              //valor de entrada n
    int i;              //variável de contagem
    int potencia = 0;   //variável de potenciação

    //ler uma valor N
    cin >> n;

    //apresentar o quadrado de cada numero par de 0 ate n inclusive se for par
    for ( i = 1; i <= n; i++){
        //conseguir todos os números de 0 ate n que sao pares
        if (i%2 == 0){
            potencia = pow(i, 2);
            cout << i << "^2 = " << potencia << endl;
        }
    }
    
    return 0;
}