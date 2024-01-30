//3291. DFD-Mayoría de edad
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {


    int edad;
    scanf("%d", &edad );

    if(edad >= 18) {
        printf("MAYOR DE EDAD\n");
    }else {
        printf("MENOR DE EDAD\n");
    }


    return 0;
}
