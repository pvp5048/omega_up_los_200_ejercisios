//866. Calcular el descuento
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

 float compra;
 scanf("%f", &compra);

 float total = compra;

 if(compra > 1000) {

     total *= 0.85;
 }

 printf("%f", total);

 return 0;
}
