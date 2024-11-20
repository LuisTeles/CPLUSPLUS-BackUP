#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float calc_delta(float a, float b, float c) {
    return pow(b, 2) - 4 * a * c;
}

void calc_raizes(float a, float b, float c, float &x1, float &x2, bool &one_root, bool &possible) {
    if (a == 0) {
        possible = false;
        return;
    }

    float delta = calc_delta(a, b, c);
    
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        possible = true;
        one_root = false;
    } else if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        possible = true;
        one_root = true;  // Only one unique root
    } else {
        possible = false;  // Indicates no real roots
    }
}

int main() {
    float a, b, c;  
    float x1, x2;
    bool one_root = false;
    bool possible = true;
    
    cin >> a >> b >> c;

    calc_raizes(a, b, c, x1, x2, one_root, possible);
    
    if (possible) {
        cout << fixed << setprecision(5);
        if (one_root) {
            cout << "x = " << x1 << endl;  // Only one root to display
        } else {
            cout << "x1 = " << x2 << endl; 
            cout << "x2 = " << x1 << endl;
        }
    } else {
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}
