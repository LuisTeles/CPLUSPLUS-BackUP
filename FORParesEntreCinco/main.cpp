#include <iostream>
using namespace std;

int main(){
    int n;
    int i;
    int controle = 0;
    
    for(i = 0; i < 5; i++){
        //ler 5 inteiros
        cin >> n;
        //contar quantos valores pares estão entres os 5    
        if (n%2 == 0){
         controle += 1;   
        }
    }
    cout << controle << " valores pares" << endl;

    return 0;
}