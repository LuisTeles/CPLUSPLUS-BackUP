#include <iostream>
using namespace std;

void converte(int anos, int meses, int dias, int &totalDias){
    totalDias = (anos*365) + (meses*30) + dias;
}

int main(){
    int mes;
    int ano;
    int dia;
    int totalDias;
    
    cin >> mes >> ano >> dia;
    
    converte(mes, ano, dia, totalDias);

    cout << totalDias << endl;
    
    return 0;
}