//2387. Nota Escolar
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int calif;
    scanf("%d", &calif);

    if (calif == 10) {
        printf("Excelente");
    } else if (calif == 9) {
        printf("Muy bien");
    } else if (calif == 8) {
        printf("Bien");
    } else if (calif == 7) {
        printf("Regular");
    } else if (calif == 6) {
        printf("Suficiente");
    } else if (calif >= 0 && calif <= 5) {
        printf("No acredita");
    }

    return 0;
}
