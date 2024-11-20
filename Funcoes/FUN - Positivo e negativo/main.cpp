#include <iostream>
using namespace std;

int sinal(int n){
    int isNegative;
    
    if(n<0){
        isNegative=-1;
    } else if(n>0){
        isNegative=1;
    } else if(n==0){
        isNegative=0;
    }
    
    return isNegative;
};

int main(){
    int a;
    int x;
    string state;
    
    cin >> a;
    x=sinal(a);
    
    if(x==-1){
        state = "Negativo";
    }else if(x==1){
        state = "Positivo";
    }else if(x==0){
        state = "Zero";
    }
    
    
    cout << state << endl;
    
    return 0;
}