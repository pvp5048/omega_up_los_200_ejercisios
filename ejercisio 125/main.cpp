//2709. Maquina de Cambio
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {


    int compra, pagaron;

    scanf("%d", &compra);
    scanf("%d", &pagaron);


    int cambio = pagaron - compra;
    int cantMonedas = 0;

    int  monedas[] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };

    for(int i =0; i < 10; i++)
    {
        while (i < 10 && cambio - monedas[i] >= 0)
        {
            cambio -= monedas[i];
            cantMonedas++;
        }
    }

    printf("%d\n", cantMonedas);


 return 0;
}
