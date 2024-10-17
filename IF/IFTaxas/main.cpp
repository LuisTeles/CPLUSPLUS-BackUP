#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double salario;

    cin >> salario;
    cout << fixed << setprecision(2);
    
    if (salario > 0 && salario <= 2000.00) {
        cout << "Isento" << endl;

    } else if (salario >= 2000.01 && salario <= 3000.00) {
        cout << "R$ " << (salario- 2000)*0.08 << endl; // 8% de salario - 2000
    } else if (salario >= 3000.01 && salario <= 4500.00){
        cout << "R$ " << ((salario - 2000)-(salario - 3000))*0.08 + (salario - 3000)*0.18<< endl; // 8% da faixa de 2000 a 3000 e 18% da faixa de 3000 a 4500
    } else{
        cout << "R$ " <<((salario - 2000)-(salario - 3000))*0.08 + ((salario - 3000)-(salario - 4500))*0.18 + (salario - 4500)*0.28<< endl; // 8% da faixa de 2000 a 3000 e 18% da faixa de 3000 a 4500 mais 28% dad faixa acima de 4500
    }
    
     return 0;
}