#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nome;
    int n;
    int n1;
    int n2;
    int n3;
    int n4 = 0;
    float media;
    
    cin >> n;
    
    cout << fixed << setprecision(2);
    for(int i = 0;i<n;i++){
        getline(cin >> ws, nome);
        cin >> n1 >> n2 >> n3 >> n4;
        
        if(n4 > 0){
            cout << nome << ": " <<(float(n1 + 2*n2 + 3*n3 + 4*n4)/10) << endl;
        }
    }
    
    return 0;
}