#include <iostream>
#include <iomanip>
using namespace std;
//-3.5 3.5 11.0 10.0 7 1 8.0 9.0 2

int main(){
    float nota1; //nota1 do aluno
    float nota2; //nota2 do aluno
    float media;
    int controle = 1; //variavel que controla o enceramento do programa
    
    cout << fixed << setprecision(2);
    while(controle == 1){
            cin >> nota1;
            while(nota1 < 0 || nota1 > 10){
                cout << "nota invalida" << endl; 
                cin >> nota1;
            }
            
            cin >> nota2;
            while(nota2 < 0 || nota2 > 10){
                cout << "nota invalida" << endl; 
                cin >> nota2;
            }
            
            media =(nota1 + nota2) / 2;
            cout << "media = "<< media << endl;
            controle = 0;

        do{
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> controle;
        } while(controle  < 0 || controle > 2);
    }
}
