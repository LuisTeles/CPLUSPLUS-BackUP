#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int l, c;
    cin >> l >>c;
    
    int altura;
    cin >> altura;
    
    int mat[100][100];
    
    for(int i=0; i<l; i++)
        for(int j=0; j<c; j++)
            cin >> mat[i][j];
            
    int soma=0;
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            soma+=mat[i][j];
        }
    }
    
    int area=pow(altura, 2)*soma;
    
    cout << "AREA = " << area << " mm^2" << endl;
        
    
    return 0;
}