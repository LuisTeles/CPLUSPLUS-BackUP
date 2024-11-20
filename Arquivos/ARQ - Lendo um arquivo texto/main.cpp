#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream arqin;// hadle reading data from file
	string linha;
	string nomearq;
	
	getline(cin >> ws, nomearq);
	
	//abrindo
	arqin.open(nomearq.c_str(), ifstream::in);
	
	//lendo dados
	while (getline(arqin >> ws, linha))
		cout<<linha<<endl;
	
	//fecha
	arqin.close();
	
	return 0;
}