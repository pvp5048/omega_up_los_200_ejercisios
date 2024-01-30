//455. CR Angry Birds
#include <iostream>
#include <string>

using namespace std;

int main() {
    string linea;
    int cont = 0;

    while (getline(cin, linea)) {
        if (linea == "ooo") {
            cont += 3;
        } else if (linea == "oo-") {
            cont += 2;
        } else if (linea == "o--") {
            cont += 1;
        }
    }

    cout << cont << endl;

    return 0;
}
