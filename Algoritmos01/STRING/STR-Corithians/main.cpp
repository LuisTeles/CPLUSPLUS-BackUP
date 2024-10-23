#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;                          //numero de atletas
    string nome;                    //nome do atleta
    int idade;                      //idade do atleta
    int contador=0;                 //contador para condicao de nao haver nenhum jogar maior de idade
    
    
    cin >> n;
    for(int i; i<n; i++){
        getline(cin >> ws, nome);
        cin >> idade;
        
        if(idade >= 18){
            cout << nome << " " << idade << endl;
            contador++;
        } 
    }
    
    cout << (contador == 0?"Nenhum jogador com 18 anos ou mais":"");
    
    return 0;
}