//713. Juego de pares
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {


    int pares = 0;

    for(int i = 0; i < 5; i++) {

        int n;
        scanf("%d", &n);
        if(n %2 == 0) {
            pares ++;
        }
    }

    printf("%d\n", pares);

    pares = 0;

    for(int i = 0; i < 5; i++) {

        int n;
        scanf("%d", &n);
        if(n %2 == 0) {
            pares ++;
        }
    }

    printf("%d", pares);

 return 0;
}
