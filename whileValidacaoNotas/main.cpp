#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float nota1; //nota1 do aluno
    float nota2; //nota2 do aluno
    float media;
    
    cout << fixed << setprecision(2);
    
    //entrada nota
    cin >> nota1;
    
    //loop da nota
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
}