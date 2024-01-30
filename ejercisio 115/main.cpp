//2987. Naranjas y Limas
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;


int main() {

    int M;
    scanf("%d",&M);

    int naranjas=0, limas=0;

    for(int i = 0; i < M; i++) {
        int costal;
        scanf("%d", &costal);

        if(costal % 2 == 0) {
            naranjas++;
        }else {
            limas++;
        }
    }

    printf("%d %d\n", naranjas, limas);



 return 0;
}
