#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int L;
    int C;
    int R1;
    int R2;


    cin >> L >> C >> R1 >> R2;

    // int maiorCilindro = (R1 > R2) ? R1 : R2;
    //cout << maiorCilindro << endl;

    // Check de tamanho largura e altura
    bool larguraOk = ((L > R1*2 + R2*2));
    bool comprimentoOk =(C > R1*2 + R2*2);

    //check de tamanho na diagonal
    float diagonal = sqrt(pow(C,2) + pow(L,2));
    bool diagonalOk = (diagonal > (2*R1 + 2*R2) + 1);


    cout << fixed << setprecision(4);
    // cout<< endl << diagonal << endl << diagonalOk << endl << 2*R1 + 2*R2 << endl;
    if (larguraOk || comprimentoOk == true)  
    {
       cout << "S" << endl;
    } else
    {
        if (diagonalOk == true) {
            cout << "S" << endl;
        } else   cout << "N" << endl; 
    }
    
}

