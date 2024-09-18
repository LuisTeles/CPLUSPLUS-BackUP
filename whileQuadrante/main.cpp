#include <iostream>
using namespace std;

int main(){
    int x;  //eixo x
    int y;  // eixo Y    
    
    //entrada dos eixos
    cin >> x >> y;
    //enquanto nenhuma da cordenadas for nula gerar um quadrante para esta cordenada
    while (x != 0 && y != 0){
        if (x > 0 && y > 0) {                   // Define se esta no quadrante 1
            cout << "primeiro" << endl;
        } else if (x < 0 && y > 0) {            // Define se esta no quadrante 3
            cout << "segundo" << endl;
        } else if (x < 0 && y < 0) {            // Define se esta no quadrante 2
            cout << "terceiro" << endl;
        } else {                                // Define se esta no quadrante 4           
            cout << "quarto" << endl;
        }   
        
        cin >> x >> y;
    }
}