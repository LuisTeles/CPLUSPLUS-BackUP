#include <iostream>
#include <string>
using namespace std;

int main() {
    int votos[1001];
    int n;
    int liked = 0;
    string saida; 

    //entrada
    cin >> n;
    for(int i = 0; i < n; i++ ){
        cin >> votos[i];
    }
    //operação
    for(int i = 0; i<n; i++){
        if(votos[i] == 1){
            liked++;
        } 
    }
    if (liked == (n/2)){
        saida = "Deu empate";
    } else if(liked > (n/2)){
        saida="A maioria gostou";
    } else {
        saida="A maioria nao gostou";
    }
    
    //saída
    cout << saida << endl;
    return 0;
}