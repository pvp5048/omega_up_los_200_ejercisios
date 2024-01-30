//10423. PEFMAT-Ejercicio51
#include <iostream>

using namespace std;

int main() {
    int cont = 0;
    for (int i = 0; i < 10; i++) {
        int id, edad, sueldo;
        cin >> id >> edad >> sueldo;

        if (edad > 35 && sueldo >= 5000 && sueldo <= 7500) {
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}
