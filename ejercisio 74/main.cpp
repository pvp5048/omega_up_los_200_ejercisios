//2415. Temperaturas
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    if (t < 0) {
        cout << "Muy Frio" << endl;
    } else if (t >= 0 && t <= 10) {
        cout << "Frio" << endl;
    } else if (t >= 11 && t <= 20) {
        cout << "Templado" << endl;
    } else if (t >= 21 && t <= 25) {
        cout << "Calido" << endl;
    } else {
        cout << "Muy Calido" << endl;
    }

    return 0;
}
