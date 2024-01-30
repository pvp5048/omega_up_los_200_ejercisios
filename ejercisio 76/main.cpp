//2404. Tablero de Ajedrez
#include <iostream>
#include <stdio.h>

using namespace std;

struct Helper {
    char buffer[100];
    string to_string(int k) {
        sprintf(buffer, "%d", k);
        return string(buffer);
    }
};

int main() {
    char letra;
    int dig;
    scanf("%c %d", &letra, &dig);

    Helper h;
    string target = letra + h.to_string(dig);

    string respuesta[2][2] = {
        {"BLANCO", "NEGRO"},
        {"NEGRO", "BLANCO"}
    };

    int col = letra - 'a';
    int fila = 8 - dig;

    cout << respuesta[fila % 2][col % 2] << endl;

    return 0;
}
