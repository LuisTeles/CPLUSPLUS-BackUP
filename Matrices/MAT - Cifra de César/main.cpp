#include <iostream>
#include <string>
using namespace std;

int main(){
    char mat[101][101];
    char aux;
    int n, m;
    
    cin >> n >> m;
    
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> mat[i][j];
            
    for(int j=0; j<m; j++)
        for (int i=0; i<n; i++)
            cout << mat[i][j];
            
            
    return 0;
}