#include <iostream>
using namespace std;
int main(){
    int tabuada[1001];
    int n;
    int resultOf;

    //entrada
    cin >> n;
    //operacao
    for(int i = 0; i<11; i++){
        resultOf = n * i;
        tabuada[i]=resultOf;
        cout << n << " x " << i << " = " << tabuada[i] << endl;
    }

    return 0;
}