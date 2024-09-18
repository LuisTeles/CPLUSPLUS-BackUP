#include <iostream>
#include <string>
using namespace std;

int main(){
    int grenais=0; //numeros de grenais jogados
    int Inter=0; //numero de vitorias do Inter
    int Gremio=0; //numero de vitorias do´Gremio
    int empates=0; //numero de empates
    string resultado = " "; //resultado dos grenais
    int controle = 1; //controla a execução do loop while
    int x; //gols Inter
    int y; //gols Gremio
    
    //loop de codigo controlado pelo usuario
    while(controle == 1){
        cin >> x >> y;
            if(x == y){
               empates++;
            } else if(x>y){
                Inter++;
            } else {
                Gremio++;
            }
        grenais++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> controle;
    }
    if(Inter == Gremio){
        resultado="Nao houve vencedor";
    }else{
        Inter>Gremio ? resultado = "Inter venceu mais": resultado="Gremio venceu mais";
    }
    cout << grenais << " grenais" << endl << "Inter:"<< Inter << endl <<"Gremio:"<<Gremio<<endl<<"Empates:"<<empates<<endl;
    cout << resultado << endl;
     
    return 0;
}