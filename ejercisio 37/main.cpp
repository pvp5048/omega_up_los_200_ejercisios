//7837. Alturas equiláteros
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int x0;
    float x1, x2, x3;

    cin >> x0;

    for (int n = 0; n < x0; n++) {
        cin >> x1;

        x2 = x1 / 2;

        x3 = sqrt(x1 * x1 - x2 * x2);

        cout << fixed << setprecision(2) << x3 << endl;
    }
    return 0;
}
