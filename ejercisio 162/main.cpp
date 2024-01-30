//489. Duración de un juego
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {


 int ini, fin;
 scanf("%d %d", &ini, &fin);

    int t = 0;
    if(ini == fin) {
        t= 24;
    }else if(ini > fin) {
        t = 24 - ini + fin;
    }else{
        t = fin - ini;
    }

    printf("%d\n", t);

 return 0;
}
