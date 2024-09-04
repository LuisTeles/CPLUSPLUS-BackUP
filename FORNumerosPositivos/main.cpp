#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main(){
    int valores;        //variavel de entrada com valores para serem checados
int i;                  //varaivel de contagem
    int controle = 0;   //valor que controla o numero de negativos iniciando em 1
    
    for (i=0; i < 6;i++){
        cin >> valores;
        if (valores > 0){
            controle += 1;
        }
    }
    
    cout << controle << " valores positivos"<< endl;
    
    return 0;
}