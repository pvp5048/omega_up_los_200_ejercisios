//1307. Matriz Simétrica
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;


int main() {

    int N;
    scanf("%d",&N);

    int m[N][N];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    bool simetrica = true;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(m[i][j] != m[j][i]) {
                simetrica = false;
            }
        }
    }

    if(simetrica) {
        printf("SI\n");
    } else {
        printf("NO\n");
    }


 return 0;
}
