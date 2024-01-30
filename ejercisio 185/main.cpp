//430. CR Diciendo Hola
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;

    while (getline(cin, nombre)) {
        cout << "Hola " << nombre << endl;
    }

    return 0;
}
