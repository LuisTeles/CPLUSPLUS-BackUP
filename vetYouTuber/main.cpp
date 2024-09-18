#include <iostream>
using namespace std;

int main(){
    int videos[1001];       //array que armazena o numero de views dos videos
    int n;                  //variavel para o numero de videos a serem analizados
    int i;                  //variavel de contagem1
    int j;                  //variavel de contagem2
    int isGreater = 0;      //variavel que vefica se e maior que 10M
    int isLower = 0;        //variavel que verifica se e menor que 10M
    
    //entrada
    cin >> n;
    for (i = 0; i<n; i++){
        cin >> videos[i];
    }
    
    //processamento
    for (j = 0; j<n; j++){
        if (videos[j]>10000000){
            isGreater++;
        } else{
            isLower++;
        }
    }
    
    //saida    
    cout << isGreater << " video(s) com mais de 10M views" << endl;
    cout << isLower << " video(s) com menos de 10M views" << endl;

    return 0;
}
