#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n;           //números de entrada
    int controle = 0;   //variável que controla o numero de valores positivos que foram lidos no loop for
    int sum = 0;        //variável que controla a soma dos números positivos
    int i;              //variável de contagem para o funcionamento do for loop

    //loop que roda todos os valores de entrada
    for (i=0; i<6; i++){
        //entrada 6 valores
        cin >> n;

        //quando o numero for positivo ele vai ser somado ao numero positivo anterior e a variável controle vai ser incrementada
        if(n > 0){
            controle += 1;
            sum += (float)n;
        }
    }
    
    //calculo de media
    float media = (double)sum/controle;

    //saída 1
    cout << controle << " valores positivos" << endl;
    cout << fixed << setprecision(1);
    //saída 2
    cout << media << endl;

    return 0;
}