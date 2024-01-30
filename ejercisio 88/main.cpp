//3241. Romanos UP
#include <iostream>
#include <string>

using namespace std;

int main() {
    string rom[] = { "I","II","III","IV","V","VI","VII","VIII","IX","X" };
    int n;
    cin >> n;

    if (n >= 1 && n <= 10) {
        cout << rom[n-1] << endl;
    } else {
        cout << "Número fuera de rango." << endl;
    }

    return 0;
}
