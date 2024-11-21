#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string senha;
    ifstream arqin;
    string nomearq;
    string senhaArq;
    
    getline(cin >> ws, nomearq);
    getline(cin >> ws, senha);
    
    arqin.open(nomearq.c_str(), ifstream::in);
    
    getline(arqin, senhaArq);
    
    if (senha == senhaArq){
        cout << "Senha correta" << endl;
    } else {
        cout << "Senha incorreta" << endl;
    }
    
    arqin.close();
    
    return 0;
}