//1228. Encuentra el mayor
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {



    int N;
    scanf("%d", &N);

    int mayor = -2000000;

    for(int i = 0; i < N; i++) {
        int elem;
        scanf("%d",&elem);

        mayor = std::max(mayor, elem);

    }

    printf("%d", mayor);


    printf("\n");

    return 0;
}
