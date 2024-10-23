#include <iostream>
using namespace std;
//papel < pedra
//pedra < tesoura
//tesoura > papel
    
int main(){
    int t;                  //numero de vezes que sera jogado
    string jogadorA;        //nome jogador a
    string jogadorB;        //nome jogador n
    int pontosA = 0;        //quantidade de pontos do jogador a
    int pontosB = 0;        //quantidade de pontos do jogador b 
    
    cin >> t;
    for (int i = 0; i<t; i++){
        getline(cin >> ws, jogadorA);
        getline(cin >> ws, jogadorB);
        
        if(jogadorA == "pedra"){
           if(jogadorB == "pedra"){
               pontosA++;
               pontosB++;
           } else if(jogadorB == "papel"){
               pontosB++;
           }else if(jogadorB == "tesoura"){
               pontosA++;
           }
           
        } else if(jogadorA == "papel"){
            if(jogadorB == "pedra"){
               pontosA++;
           } else if(jogadorB == "papel"){
               pontosA++;
               pontosB++;
           }else if(jogadorB == "tesoura"){
               pontosB++;
           }
           
        } else if(jogadorA == "tesoura"){
            if(jogadorB == "pedra"){
               pontosB++;
           } else if(jogadorB == "papel"){
               pontosA++;
           }else if(jogadorB == "tesoura"){
               pontosA++;
               pontosB++;
           }
           
        }
        
        if(pontosA==pontosB){
            cout << "Empate" << endl;
        } else if(pontosA>pontosB){
            cout << "Jogador A" << endl;
        } else if (pontosB>pontosA){
            cout << "Jogador B" << endl;
        }
        
        pontosA=0;
        pontosB=0;
    }
    
    
    
    
    return 0;
}