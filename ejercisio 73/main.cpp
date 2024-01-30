//2574. Tres Numeros Al Reves
#include <iostream>

using namespace std;

int main() {
    int nums[3];
    for (int i = 0; i < 3; i++) {
        cin >> nums[i];
    }

    for (int i = 2; i >= 0; i--) {
        cout << nums[i] << " ";
    }

    return 0;
}
