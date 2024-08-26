#include <iostream>
using namespace std;

int main() {
    int coordenadaX;
    int coordenadaY;

    cin >> coordenadaX >> coordenadaY;

    if (coordenadaX == 0 && coordenadaY == 0) { // Define se o ponto esta na origem 
        cout << "Origem" << endl;
    
    } else if (coordenadaX == 0 || coordenadaY == 0) { // Define se um ponto esta sobre algum eixo
        if (coordenadaX == 0){ cout << "Eixo Y" << endl; } else { cout<< "Eixo X" << endl; } // Define se um ponto esta sobre algum eixo 
        
    } else if (coordenadaX > 0 && coordenadaY > 0) { // Define se esta no quadrante 1
        cout << "Q1" << endl;
    } else if (coordenadaX < 0 && coordenadaY > 0) { // Define se esta no quadrante 3
        cout << "Q2" << endl;
    } else if (coordenadaX < 0 && coordenadaY < 0) { // Define se esta no quadrante 2
        cout << "Q3" << endl;
    } else {                                         // Define se esta no quadrante 4           
        cout << "Q4" << endl;
    }   
    return 0;
}