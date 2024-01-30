//2403. Positivo Negativo o Cero
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N > 0) {
        cout << "POSITIVO";
    } else if (N < 0) {
        cout << "NEGATIVO";
    } else {
        cout << "CERO";
    }
    cout << endl;

    return 0;
}
