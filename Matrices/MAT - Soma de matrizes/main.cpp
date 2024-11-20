#include <iostream>
using namespace std;

int main(){
    int a, b;
    int mat1[10][10], mat2[10][10];
    
    cin >> a >> b;
    
    for (int i=0; i<a; i++)
        for (int j=0; j<b; j++)
            cin >> mat1[i][j];
    
    for (int i=0; i<a; i++)
        for (int j=0; j<b; j++)
            cin >> mat2[i][j];
    
    int mat3[10][10];
    
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}