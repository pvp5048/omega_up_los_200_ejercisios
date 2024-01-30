//3983. Imprime arreglo 23983. Imprime arreglo 2
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

     int n;
     scanf("%d", &n);

     int arr[n];
     for(int i =0; i < n; i++) {
        scanf("%d", &arr[i]);
     }

     for(int i =0; i<n; i++) {
       printf("%d\n", arr[n-1-i]);
     }


 return 0;
}
