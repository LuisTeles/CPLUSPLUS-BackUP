#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int quantidade;
    int codigo;

    float valor[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    cin >> codigo >> quantidade;

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << valor[codigo - 1] * quantidade << endl;
    

    return 0;
}