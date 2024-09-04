#include <iostream>
using namespace std;

int main(){
    int n;                              //numero total de entradas que o usuário vai colocar
    int i;                              //variável de incrementação         
    int valores;                        //valores que o usuário vai digitar para serem avaliados
    bool isEven = false;                //boolean para caso o numero seja par
    bool isPositive = false;            //boolean para caso o numero seja positivo
    string odd = "ODD";                 //string com valor ODD
    string even = "EVEN";               //string com valor EVEN
    string positive = "POSITIVE";       //string com valor POSITIVE
    string negative = "NEGATIVE";       //string com valor NEGATIVE

    //ler uma entrada n
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> valores;
        //descobre se é par
        valores%2 == 0 && valores != 0 ? isEven = true : isEven = false;

        //descobre se é positivo
        valores > 0 && valores != 0 ? isPositive = true : isPositive = false;

        //condição para que se o valor for zero imprima 0 caso contrario imprima a string correta
        valores == 0 ? (cout << "NULL" << endl) : (cout << (isEven ? even : odd)<< " " << (isPositive ? positive : negative) << endl);
    }

    return 0;
}