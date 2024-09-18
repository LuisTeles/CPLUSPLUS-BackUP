#include <iostream>
using namespace std;

int main(){
    int senha;                      //senha digitada
    int senhaDoUsuario = 2002;      //senha usada pelo usuario
    
    //Entrada valor da senha
    cin >> senha;
    //enquanto o valor da senha for diferenta da senha correta pinta o valor senha incorreta
    while (senha != senhaDoUsuario){
        cout << "Senha Invalida" << endl;
        cin >> senha;
    }
    cout << "Acesso Permitido" << endl;
}