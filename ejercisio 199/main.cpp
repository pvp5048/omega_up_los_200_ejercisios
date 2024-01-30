//1938. Atestamiento del callejón
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> autos(N);
    for (int i = 0; i < N; i++) {
        cin >> autos[i];
    }

    int target;
    cin >> target;

    int indice = -1;
    for (int i = N - 1; i >= 0; i--) {
        if (autos[i] == target) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        cout << N - indice << endl;
    } else {
        cout << "No existe el auto" << endl;
    }

    return 0;
}
