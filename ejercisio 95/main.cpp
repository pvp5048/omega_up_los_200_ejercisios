//157. Promedios
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        int elem;
        scanf("%d", &elem);
        sum += elem;
    }

    printf("%d\n", sum / 5);

    return 0;
}
