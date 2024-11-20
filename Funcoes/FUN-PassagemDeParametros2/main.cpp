#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void converte(float f, float &c, float &k){
    c=(5*(f-32))/9;
    k=(((5*(f-32))/9)+273);
}

int main(){
    float f=0, c, k;
    
    cin >> f;
    
    converte(f,c,k);
    
    cout << fixed << setprecision(2);
    cout << "Celsius: " << c << endl;
    cout << "Kelvin: " << k << endl;
    
    return 0;
}