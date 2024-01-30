//916. Cada Segundo Cuenta
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;


int main() {


    int reloj, deberia;

    scanf("%d %d", &reloj, &deberia);

    int dif = abs(reloj - deberia);

    if(dif > 1) {
        if(reloj > deberia){
            printf("ATRASAR %d SEGUNDOS\n", dif);
        }else if(reloj < deberia) {
            printf("ADELANTAR %d SEGUNDOS\n", dif);
        }
    }else if(dif == 1) {
        if(reloj > deberia){
            printf("ATRASAR 1 SEGUNDO\n");
        }else if(reloj < deberia) {
            printf("ADELANTAR 1 SEGUNDO\n");
        }
    }


    return 0;
}
