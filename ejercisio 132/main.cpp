//2391. Intervalo original
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

 int a,b,c;
 scanf("%d %d %d", &a, &b, &c);

 if(c >= a && c <= b) {
    printf("INTERVALO\n");
 } else {

    if(c > b) {
        printf("DERECHA\n");
    }
    if(c < a) {
        printf("IZQUIERDA\n");
    }
 }


 return 0;
}
