#include <iostream>
using namespace std;

int main(){
    int n = 0; //valor que sera operado
    int i = 0; //comeco do intervalo de numeros 
    int j = 0; //fim do intervalo de numeros 
    int controle = 0;//numero de vez que n foi mudado
    int h; //variavel de contagem
    int controle2 = 0; //controla qual o maior comprimento de circulo do intevalo
    
    //entrada do inicio e fim do intevalo
    cin >> i >> j;
    //saida do inicio e fim do intevalo
    cout << i << " " << j << " "; 
    
    //garante que o valor de i é maior que j
    if (i>j){
        swap(i,j);
    }
    
    //loop externo que circula entre os valores do intervalo i-j
    for(i; i <= j; i++){
        n = i;
        //loop interno que opera os valores do intervalos até se tornarem 1
        while(n!=1){
            if(n%2==0){
                n=n/2;
            }else{
                n=(n*3)+1;
            }
            controle++;
        }
        controle > controle2 ? controle2 = controle : controle2 = controle2;
        controle = 0;
    }
    
    cout << controle2 + 1 << endl;
    
    return 0;
}