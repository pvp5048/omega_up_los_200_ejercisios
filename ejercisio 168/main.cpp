//3292. DFD-Positivo Negativo o Cero
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    if(n > 0) {
        printf("POSITIVO\n");
    }else if(n < 0) {
        printf("NEGATIVO\n");
    }else{
        printf("CERO\n");
    }


 return 0;
}
