#include <iostream>
using namespace std;

int main(){
    int mat[10][10];
    int i;
    int j;
    int a, b;
    
    cin >> a >> b;
    
    
    for (int i=0; i<a; i++)
        for(int j=0; j<b; j++)
            cin >> mat[i][j];
            
    for (int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}