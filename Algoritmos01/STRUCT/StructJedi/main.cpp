#include <iostream>
using namespace std;

struct dados{
    string nome;//nome do jedi
    int base;//base que o jedi se encontra
};

int main(){
    dados jedi[1001];//vetor de jedis
    int n;//numero de jedis a serem cadastrados
    int i;//contador
    string locateJedi;//encontra o jedi e a base que este esta
    bool flag=false;//indentificador para caso o jedi nao esteja cadastrado

    //entrada
    cin >> n;
    for(i=0; i<n; i++){
        getline(cin >> ws, jedi[i].nome);
        cin >> jedi[i].base;
    }

    getline(cin >> ws, locateJedi);

    //operacao
    for(i=0; i<n; i++){
        if(locateJedi==jedi[i].nome){
            //saida
            cout << "Este cavaleiro esta na base " << jedi[i].base << endl;
            flag=true;
            break;
        }
    }

    if(!flag){
        //saida
        cout << "Este cavaleiro nao esta cadastrado" << endl;
    }

    return 0;
}