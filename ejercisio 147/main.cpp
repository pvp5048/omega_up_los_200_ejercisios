//2878. Encontrando la posición.
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;


int main() {

   int n;
   scanf("%d", &n);

   int a[n];

   for(int i =0; i<n; i++) {
     scanf("%d", &a[i]);
   }

   int k;
   scanf("%d", &k);

   int ant =0;
   for(int i =0; i <n; i++) {
       if(a[i] < k) {
          ant++;
        }
    }

    printf("%d\n", ant);


 return 0;
}
