#include <iostream>
#include <cmath>
using namespace std;

int calc_a(int x){
    int resposta;
    resposta=2*pow(x,2)+3*x-1;
    return resposta;
};

int calc_b(int x){
    int resposta;
    resposta=pow(x,3);
    return resposta;
};

int calc_c(int y){
    int resposta;
    resposta=pow(y,3);
    return resposta;
};


int main(){
    int a, b, c, INA, INB;
    
    cin >> INA >> INB;
    a=calc_a(INA);
    //a=2x^2+3x-1
    cout << "a = " << a << endl;

    b=calc_b(INA);
    //b=x^3
    cout << "b = " << b << endl;
    
    c=calc_c(INB);
    //c = y^3;
    cout << "c = " << c << endl;
    
    return 0;
}