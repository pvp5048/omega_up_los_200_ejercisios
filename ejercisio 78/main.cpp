//2877. Sumando numeros
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

   int n;
   scanf("%d", &n);

   int sp=0,si=0;

   for(int i =0; i<n; i++) {
     int elem;
     scanf("%d", &elem);

     if(elem%2==0) {
          sp+=elem;
        }else {
          si+=elem;
        }
   }

   printf("%d %d\n",sp,si);

 return 0;
}
