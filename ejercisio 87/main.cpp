//2651. Secuencia creciente
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int prev, curr, length;
    scanf("%d", &prev);
    length = 1;

    while (scanf("%d", &curr) == 1) {
        if (curr < prev) break;
        length++;
        prev = curr;
    }

    cout << length << endl;

    return 0;
}
