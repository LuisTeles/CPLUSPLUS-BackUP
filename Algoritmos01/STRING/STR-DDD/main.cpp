// C++ program to convert a string to uppercase
#include <algorithm> // for using transform
#include <cctype> // for using toupper
#include <iostream>
#include <string>
using namespace std;

int main(){
    string cdd;         
    int ddd;
    
    getline(cin >> ws, cdd);
    
    if (cdd == "Brasilia"){
        cout << 61 << endl;
    } else if (cdd == "Salvador"){
        cout << 71 << endl;
    } else if (cdd == "Sao Paulo"){
        cout << 11 << endl;
    } else if (cdd == "Rio de Janeiro"){
        cout << 21 << endl;
    } else if (cdd == "Juiz de Fora"){
        cout << 32 << endl;
    } else if (cdd == "Campinas"){
        cout << 19 << endl;
    } else if (cdd == "Vitoria"){
        cout << 27 << endl;
    } else if (cdd == "Belo horizonte"){
        cout << 31 << endl;
    } else if (cdd == "Santa Rita do Sapucai"){
        cout << 35 << endl;
    } else {
        cout << "DDD nao cadastrado" << endl;
    }
    
    return 0;
}