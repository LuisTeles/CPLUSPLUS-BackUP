#include <iostream>
using namespace std;

int main(){
    int n;
    int amigos[1001];
    int i;
    int j;
    int maior = 0;
    int menor;
    
    cin >>n;
    for (i = 0; i<n; i++){
        cin >> amigos[i];
    }
    
    for(j = 0; j<n; j++){
        menor = amigos[0];
        if(amigos[j]>maior){
           maior = amigos[j]; 
        }
        if (amigos[j]<menor){
            menor = amigos[j];
        }
    }
    
    cout << "Menor numero de contatos: "<< menor << endl;
    cout << "Maior numero de contatos: " << maior << endl;
    return 0;
}