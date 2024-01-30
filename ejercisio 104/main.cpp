//2262. Pares e impares
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    int pares = 0, impares = 0;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << pares << " " << impares << endl;

    return 0;
}
