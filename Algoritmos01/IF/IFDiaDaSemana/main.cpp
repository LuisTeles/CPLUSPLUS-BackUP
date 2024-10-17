#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int dia, mes, ano;
    cin >> dia >> mes >> ano;

    int g = (mes <= 2) ? ano - 1 : ano;
    int f = (mes <= 2) ? mes + 13 : mes + 1;

    int n = int(365.25 * g) + int(30.6 * f) - 621049 + dia;

        int delta;
        if (n < 36523) 
        {
            delta = 2;
        } else if (n >= 36523 && n < 73048)
        {
            delta = 1;
        } else
        {
            delta = 0;
        } 

    int diaSemana = round(fmod(n / 7.0, 1.0) * 7) + delta + 1; // garante que o dia da semana seja 1 domingo ate 7 sábado

    if (diaSemana > 7) diaSemana -= 7; 

    string nomeDoDia[] = {"domingo", "segunda-feira", "terca-feira", "quarta-feira", "quinta-feira", "sexta-feira", "sabado"};

    cout << nomeDoDia[diaSemana - 1] << endl;
}