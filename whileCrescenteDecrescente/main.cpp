#include <iostream>
using namespace std;

int main(){
    int x = 0; //valores de x
    int y = 1; //valores de y
    
    //ler valores de x y por tempo indeterminado
    while(x != y){
        cin >> x >> y;
        if(x==y){
            
        }
        else if (x<y){
            cout << "Crescente" << endl;
        } else {
            cout << "Decrescente" << endl;
        }
    }
}