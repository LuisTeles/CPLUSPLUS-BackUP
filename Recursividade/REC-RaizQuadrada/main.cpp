#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float sqrt(int x, float x0, float e) {
    
    //abs() is for integers.
    //fabs() is for floating-point numbers.
    if (fabs(pow(x0, 2) - x) <= e) {
        return x0;
    } else {
        
        return sqrt(x, (x0 + x / x0) / 2, e);
    }
}

int main() {
    int x;
    float x0, e;

    cin >> x >> x0 >> e;

    cout << fixed << setprecision(3);
    cout << sqrt(x, x0, e) << endl;

    return 0;
}