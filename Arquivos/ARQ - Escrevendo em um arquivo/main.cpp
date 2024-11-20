#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ofstream arqout; // handle for writing to file
    ifstream arqin;  // handle for reading from file
    string nomearq;  // file name
    float aux;
    int i = 0;

    getline(cin >> ws, nomearq);

    // Opening file for writing
    arqout.open(nomearq.c_str(), ofstream::out);

    // Writing to the file until user stops
    while (cin >> aux && aux != 0) { // stopping condition when aux is 0
        arqout << aux << endl;
        i++;
    }
    arqout.close(); // closing the file after writing

    // Opening file for reading
    arqin.open(nomearq.c_str(), ifstream::in);

    cout << fixed << setprecision(2);
    while (arqin >> aux) { // reading values from file
        cout << aux << " ";
    }
    arqin.close(); // closing the file after reading

    return 0;
}
