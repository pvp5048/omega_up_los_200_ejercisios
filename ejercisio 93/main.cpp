//2389. Reloj
#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);


    s++;
    if (s >= 60) {
        s = 0;
        m++;
    }
    if (m >= 60) {
        m = 0;
        h++;
    }
    if (h >= 24) {
        h = 0;
    }

    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}
