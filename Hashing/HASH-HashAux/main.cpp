#include <iostream>
using namespace std;

int hash_aux(int k, int m){
    if (k&&m==0){
        return 0;
    } else if(k%m<0){
        return k%m+m;
    }else{
        return k%m;
    }
}


int main(){
    int k, m;
    
    cin >> k >> m;
    while (k && m != 0){
        cout << hash_aux(k, m) << endl;
        cin >> k >> m;
    }
    
    
    return 0;
}