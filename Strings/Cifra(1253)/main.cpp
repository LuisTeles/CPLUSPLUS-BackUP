#include <iostream>
#include <string>
#include <vector>

using namespace std;

string decifrarCesar(const string& texto, int deslocamento) {
    string decifrado;
    for (char c : texto) {
        // Calcule a nova posição da letra considerando o deslocamento para a esquerda
        //usando tablea ASCII
        char nova_letra = 'A' + (c - 'A' - deslocamento + 26) % 26;
        decifrado += nova_letra; // Adiciona cada letra decifrada diretamente à string
    }
    return decifrado;
}

int main() {
    int n;
    cin >> n;
    vector<string> resultados;

    for (int i = 0; i < n; ++i) {
        string texto;
        int deslocamento;
        cin >> texto >> deslocamento;
        
        // Decodificar o texto usando o deslocamento
        resultados.push_back(decifrarCesar(texto, deslocamento));
    }

    // Saída dos resultados
    for (const string& resultado : resultados) {
        cout << resultado << endl;
    }

    return 0;
}
