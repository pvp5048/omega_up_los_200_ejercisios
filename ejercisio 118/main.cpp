//1145. Mensaje de Amor
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

 int M;

 scanf("%d", &M);

 while(M--) {

    int N;
    scanf("%d",&N);

    for(int i = 0; i < N; i++) {
        printf("<3");
    }
    printf("\n");
 }

 return 0;
}
