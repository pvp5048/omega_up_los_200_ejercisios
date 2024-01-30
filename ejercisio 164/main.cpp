//2968. Divisores positivos
#include <iostream>
#include <stdio.h>
#include <math.h>

#define ll long long int

using namespace std;

int main() {

   int n;
   scanf("%d", &n);

   int sqr = (int)sqrt(n);

   int div =0;
   for(int i=1; i<=sqr; i++) {
       if(n%i==0) {
          div++;
       }
   }

   div *= 2;

   if(sqr * sqr == n) {
      div--;
   }

   printf("%d\n", div);

 return 0;
}
