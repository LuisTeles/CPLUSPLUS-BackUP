#include <iostream>
#include <string>
using namespace std;

//struct de dados dos atletas
struct dados {
    string nome;//nome do atleta
    int n1, n2, n3, n4;//notas dos atletas nas quatro provas
};

//funcao que calcula o atleta mais forte baseado no numero de pontos feitos por dado atleta e retorna o index do atleta no array de todos os atletas
int strongest(dados atletas[], int nAtletas) {
    int maior = atletas[0].n1 + atletas[0].n2 + atletas[0].n3 + atletas[0].n4; //atleta com maior numero de pontos
    int flag = 0; //flag que vai marcar o atleta que possui mais pontos
    
    for (int i = 0; i < nAtletas; i++) {
        int soma = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;//soma dos pontos de cada atleta
        
        if (soma > maior) {
            maior = soma;
            flag = i; 
        }
    }
    
    return flag; 
};

int main() {
    int n;//numero de atletas
    dados vec[1001];//array dos atletas
    
    //input
    cin >> n;
    for (int i = 0; i < n; i++) {
        getline(cin >> ws, vec[i].nome); // input dos nomes
        cin >> vec[i].n1 >> vec[i].n2 >> vec[i].n3 >> vec[i].n4; // input dos pontos
    }

    //funcao que calcula o atleta mais forte
    int vencedor = strongest(vec, n);
    
    //saida
    cout << "Vencedor: " << vec[vencedor].nome << endl;
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

//struct de dados dos atletas
struct dados {
    string nome;//nome do atleta
    int n1, n2, n3, n4;//notas dos atletas nas quatro provas
};

//funcao que calcula o atleta mais forte baseado no numero de pontos feitos por dado atleta e retorna o index do atleta no array de todos os atletas
int strongest(dados atletas[], int nAtletas) {
    int maior = atletas[0].n1 + atletas[0].n2 + atletas[0].n3 + atletas[0].n4; //atleta com maior numero de pontos
    int flag = 0; //flag que vai marcar o atleta que possui mais pontos
    
    for (int i = 0; i < nAtletas; i++) {
        int soma = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;//soma dos pontos de cada atleta
        
        if (soma > maior) {
            maior = soma;
            flag = i; 
        }
    }
    
    return flag; 
};

int main() {
    int n;//numero de atletas
    dados vec[1001];//array dos atletas
    
    //input
    cin >> n;
    for (int i = 0; i < n; i++) {
        getline(cin >> ws, vec[i].nome); // input dos nomes
        cin >> vec[i].n1 >> vec[i].n2 >> vec[i].n3 >> vec[i].n4; // input dos pontos
    }

    //funcao que calcula o atleta mais forte
    int vencedor = strongest(vec, n);
    
    //saida
    cout << "Vencedor: " << vec[vencedor].nome << endl;
    
    return 0;
}

