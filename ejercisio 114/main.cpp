//556. Nivel �ptimo
#include <iostream>
#include <stdio.h>
using namespace std;


int main() {


    int a,b;

    scanf("%d %d", &a, &b);

    if(a == b) {

        printf("Nivel Optimo");

    }else if(b > a) {
        printf("1 %d", b-a);
    }else {
        printf("2 %d", a- b);
    }



    printf("\n");


    return 0;
}
