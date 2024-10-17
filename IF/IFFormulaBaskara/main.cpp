#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

    // Ax^2 + Bx + c = 0   
    // x = (-b (+ || -) sqrt(delta)/ 2 * a)
    // delta = pow(b, 2) - 4*A*C
    // delta < 0 --> NAN   &&   delta = 0 --> apenas uma raiz  && delta > 0 --> duas raízes

int main() {
      double A;
      double B;
      double C;
      double X1;
      double X2;
      double delta;

      cin >> A >> B >> C;

      delta = pow(B, 2) - 4*(A)*(C); // calculo do delta
      cout << fixed << setprecision(5);
      // cout << delta << endl;

      if ((delta < 0) || (A == 0))                // condição onde a raiz nao possui solução real
      {
         cout << "Impossivel calcular" << endl;
      } else if (delta = 0 )                      // condição onde a raiz possui apenas uma solução real
      {
         X1 = (-B + sqrt(pow(B, 2) - 4*(A)*(C))) / (2 * A);       //calculo da raiz 1
         X2 = (-B - sqrt(pow(B, 2) - 4*(A)*(C))) / (2 * A);       //calculo da raiz 2
         cout << "R1 = " << X1 << endl << "R2 = " << X2 << endl;
      } else                                      // condição onde a raiz possui duas soluções reais
      {
         X1 = ((-B) + sqrt(pow(B, 2) - 4*(A)*(C))) / (2 * A);       //calculo da raiz 1
         X2 = (-B - sqrt(pow(B, 2) - 4*(A)*(C))) / (2 * A);       //calculo da raiz 2
         cout << "R1 = " << X1 << endl << "R2 = " << X2 << endl;

      }
      
      
      return 0;
}