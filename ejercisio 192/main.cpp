//2760. Buenas Series
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {


    int N,K;
    scanf("%d %d", &N, &K);

    int minutos[N];
    for(int i =0; i<N; i++) {
        scanf("%d", &minutos[i]);
    }

    int total_cap = 0;
    int sum  = 0;
    for(int i =N-1; i>=0; i--) {
       if(sum >= K) {
          break;
        }

        sum += minutos[i];

        if (sum < K) {
            total_cap++;
        }
    }

    printf("%d\n", total_cap);

    return 0;
}
