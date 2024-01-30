//865. Es Mayor o Menor de Edad
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {


    int edad;
    scanf("%d", &edad);

    if(edad >= 18) {
        printf("Es Mayor");
    }else {
        printf("Es Menor");
    }

    printf("\n");


    return 0;
}
