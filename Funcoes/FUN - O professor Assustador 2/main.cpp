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

//funcao que calcula o numero de alunos abaixo da media da turma
int nAbaixo(int notas[], int nAlunos, float media){
    float m = media;//valor da media
    int i, nA;//contadores
    
    nA=0;
    for(i=0; i<nAlunos; i++){
        if(notas[i]>media){
            nA++;
        }
    }
    
    return nA;
};

//funcoa que calcula o numero de alunos acima da media da turma
int nAcima(int notas[], int nAlunos, float media){
    float m = media;//valor da media
    int i, nB=0;//contadores
    
    nB=0;
    for(i=0; i<nAlunos; i++){
        if(notas[i]<=media){
            nB++;
        }
    }
    
    return nB;
};


int main(){
    int notas[101];//vetor de notas
    int nAlunos;//numero total de alunos 
    float m;//valor da media 
    int acima;
    int abaixo;
    
    //entrada 
    cin >> nAlunos;
    for(int i = 0; i<nAlunos; i++){
        cin >> notas[i];
    }
    
    //funcao media
    m=media(notas, nAlunos);
    
    //funcao para alunos acima da media
    acima=nAcima(notas, nAlunos, m);
    
    //funcao para alunos abaixo da media
    abaixo=nAbaixo(notas, nAlunos, m);
    
    //saida
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << m << endl;
    cout << "Alunos com nota abaixo da media: "<< abaixo << endl;
    cout << "Alunos com nota acima da media: " << acima << endl;
    
    return 0;
}