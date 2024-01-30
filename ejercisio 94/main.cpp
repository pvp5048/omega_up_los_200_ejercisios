//867. ¿Quién tiene más dinero?
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

    int j1, j2, j3, p1, p2;
    scanf("%d %d %d", &j1, &j2, &j3);

    int s1 = j1 + j2 + j3;

    scanf("%d %d", &p1, &p2);
    int s2 = p1 + p2;

    if (s1 > s2) {
        printf("Juan");
    } else {
        printf("Pedro");
    }

    printf("\n");

    return 0;
}
