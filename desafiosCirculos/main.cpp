#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x1, y1, r1;
    double x2, y2, r2;
    double distancia;
    double area;
    double maiorRaio;
    double menorRaio;
    
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    distancia = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
    
    // testa qual dos raios esta maior 
    if(r1 >= r2){
		maiorRaio = r1;
		menorRaio = r2;
	} else {
		maiorRaio = r2;
		menorRaio = r1;
	}
    
    if(distancia > (r1 + r2)) {
		cout << 0 << endl;
	} else{
        // Tive que usar a formula na sua versao completa a formula simplificada como no exercicio nao obteve a saida esperada
        double part1 = pow(menorRaio, 2) * acos((pow(distancia, 2) + pow(menorRaio, 2) - pow(maiorRaio, 2)) / (2 * distancia * menorRaio));
        double part2 = pow(maiorRaio, 2) * acos((pow(distancia, 2) + pow(maiorRaio, 2) - pow(menorRaio, 2)) / (2 * distancia * maiorRaio));
        double part3 = 0.5 * sqrt((-distancia + menorRaio + maiorRaio) * (distancia + menorRaio - maiorRaio) * (distancia - menorRaio + maiorRaio) * (distancia + menorRaio + maiorRaio));

        area = part1 + part2 - part3;
        // se a area for maior que zero 2 casas decimais caso contrario 0 casas decimais
		cout << fixed << (area > 0 ? setprecision(2) : setprecision(0)) << area << endl;
	}
    
    // cout << acos(0.5) << endl;

    return 0;
}