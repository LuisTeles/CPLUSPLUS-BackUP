#include <iostream>
#include <iomanip>
using namespace std;

//funcao que calcula a media da soma de todos os componentes de um vetor notas
float media(int notas[], int nAlunos){
    float media;//valor da media calculada
    int soma = 0;//valor da soma dos elemetos do vetor
    
    for(int i=0; i<nAlunos; i++){
        soma += notas[i];
    }
    
    media = float(soma)/nAlunos;
    
    return media;
};

int main(){
    int notas[101];//vetor de notas
    int nAlunos;//numero total de alunos 
    float m;//valor da media 
    
    //entrada 
    cin >> nAlunos;
    for(int i = 0; i<nAlunos; i++){
        cin >> notas[i];
    }
    
    //funcao media
    m=media(notas, nAlunos);
    
    //saida
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << m << endl;
    
    return 0;
}