//9224. Balbuceando palabras
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, string> diccionario;
    diccionario["hola"] = "konnichiwa";
    diccionario["comida"] = "shokumotsu";
    diccionario["agua"] = "mizu";
    diccionario["wc"] = "toire";
    diccionario["tren"] = "densha";
    diccionario["auxilio"] = "tasukete";

    string entrada;
    getline(cin, entrada);

    entrada.erase(0, entrada.find_first_not_of(" "));
    entrada.erase(entrada.find_last_not_of(" ") + 1);

    if (diccionario.find(entrada) != diccionario.end()) {
        cout << diccionario[entrada] << endl;
    } else {
        cout << "palabra no encontrada" << endl;
    }

    return 0;
}
