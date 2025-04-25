#include <iostream>
#include <cmath>
using namespace std;

int exp(int a, int n){
    
    if(n==0){
        return 1;
    } else {
        return a*pow(a,n-1);
    }
    
}

int main(){
    int a;
    int n;
    
    cin >> a >> n;
    
    cout << exp(a, n) << endl;
    
    
    return 0;
}