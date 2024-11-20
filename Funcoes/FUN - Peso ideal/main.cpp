#include <iostream>
#include <iomanip>

using namespace std;

float ideal(float h, char sexo){
    float pesoI;
    
    if(sexo == 'M'){
        pesoI=(72.7*h)-58;
    } else if(sexo == 'F') {
        pesoI=62.1*h-44.7;
    }
    
    return pesoI;
}

int main(){
    float a;
    char b;
    float peso;
    
    cin >> a;
    cin >> b;
    
    peso = ideal(a, b);
    
    cout << fixed << setprecision(2);
    cout << "Peso ideal = " << peso << " kg" << endl;
    
    return 0;
}