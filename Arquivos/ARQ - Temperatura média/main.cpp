#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    float temp[30];
	ifstream arqin;// hadle reading data from file
	int i; //contador
	int n; //numero do contador
	float soma;
	string nomearq;
	
	getline(cin >> ws, nomearq);
	
	arqin.open(nomearq.c_str(), ifstream::in);
	
	i=0;
	while(arqin >> temp[i])
		i++;
	n = i;
	
	//fecha
	arqin.close();
	
	//processamento
	soma=0;
	for(int i=0; i<n; i++){
	    soma += temp[i];
	}
	
	cout << fixed << setprecision(1);
	cout << "Temperatura media: " << (soma/n) << " graus" << endl;
	
	
	return 0;
}