//768. Talamontes
#include <iostream>
#include <map>

#define ll long long int

using namespace std;

int main() {
    int N, m;
    cin >> N >> m;

    ll arboles[N];
    for (int i = 0; i < N; i++) {
        cin >> arboles[i];
    }

    ll sierra = 0;
    for (int i = 0; i < N; i++) {
        sierra = (arboles[i] > sierra) ? arboles[i] : sierra;
    }

    ll total_madera = 0;
    while (true) {
        total_madera = 0;
        for (int i = 0; i < N; i++) {
            if (arboles[i] > sierra) {
                total_madera += arboles[i] - sierra;
            }
        }

        if (total_madera >= m) {
            break;
        }
        sierra--;
    }

    cout << sierra << endl;

    return 0;
}
