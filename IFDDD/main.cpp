#include <iostream>
using namespace std;

// 61, 71, 11, 21, 32, 19, 27, 31
// Brasilia, Salvador, Sao Paulo, Rio de Janeiro, Juiz de Fora, Campinas, Vitoria, Belo Horizonte

int main(){
    int DDD;

    cin >> DDD;

    switch (DDD) // para cada caso de DDD uma mensagem é exposta
    {
    case 61:
        cout << "Brasilia" << endl;
        break;
    case 71:
        cout << "Salvador" << endl;
        break;
    case 11:
        cout << "Sao Paulo" << endl;
        break;
    case 21:
        cout << "Rio de Janeiro" << endl;
        break;
    case 32:
        cout << "Juiz de Fora" << endl;
        break;
    case 19:
        cout << "Campinas" << endl;
        break;
    case 27:
        cout << "Vitoria" << endl;
        break;
    case 31:
        cout << "Belo Horizonte" << endl;
        break;
    
    default:
        cout << "DDD nao cadastrado" << endl;
        break;
    }
}