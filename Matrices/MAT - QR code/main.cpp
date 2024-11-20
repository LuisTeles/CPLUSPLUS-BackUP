#include <iostream>
#include <string>
using namespace std;

int main(){
    int mat[3][3];
    int aux;
    // int fem[3][3];
    // int mas[3][3];
    
    int mas[3][3]={
        {1, 1, 1},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    int fem[3][3]={
        {1, 0, 0},
        {0, 1, 0},
        {1, 0, 0}
    };
    
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin >> mat[i][j];
            
            
    bool flag = true;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(mat[i][j]!=mas[i][j]){
                flag = false;
            }
        }
    }
        
            
    if (flag==true){
        cout << "MASCULINO" << endl;
    } else{
        cout << "FEMININO" << endl;
    }
    
    return 0;
}