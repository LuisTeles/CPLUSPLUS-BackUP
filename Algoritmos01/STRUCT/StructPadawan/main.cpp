#include<iostream>
#include<iomanip>
using namespace std;

struct dados{
    string nome;//nome do padawan
    int pontos;//numero de pontos do padawan
};

int main(){
    int n;//numero de padawans a ser cadastrados
    dados padawans[1001];//vetor de padawans
    int maiorPontos = 0;//padawn com mais pontos
    string maiorNome;//nome do padawn com mais pontos
    float media;//media da turma
    int soma = 0;
    
    //entrada    
    cin >> n;
    
    for(int i = 0; i<n; i++){
        getline(cin>>ws, padawans[i].nome);
        cin >> padawans[i].pontos;
        soma += padawans[i].pontos;
    }
    
    
    //operacao
    media = float(soma)/n;
    
    for(int i = 0; i<n; i++){
        if(maiorPontos < padawans[i].pontos){
             maiorPontos=padawans[i].pontos;
             maiorNome=padawans[i].nome;
        }
    }
    
    
    //saida
    cout << fixed << setprecision(2);
    cout << "Padawan com mais pontos: " << maiorNome << endl;
    cout << "Pontos: " << maiorPontos << endl;
    cout << "Media da turma: " << media << " pontos" << endl;
    
    return 0;
}