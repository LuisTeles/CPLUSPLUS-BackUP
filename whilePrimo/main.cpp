#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int n; //valor que pode ser numero primo
    int i = 2; //variavel de contagem 1
    bool primo = true;
    float divisao=0; //controle da divisao
    string resultado = "primo";//string de saida
    
    //entrada
    cin >> n;
    float limite = sqrt(n);
    //loop para todos os valore de 1 ate n
    while(i<limite && primo == true){
        if (n%i == 0){
            primo = false;
            cout << "nao e ";
        }
        i++;
    }
    
    cout << resultado << endl;
}