//1296. Matriz
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {


    int F,C;
    scanf("%d %d", &F, &C);

    int m[F][C];

    for(int i = 0; i < F; i++){
      for(int j = 0; j < C; j++) {
          scanf("%d",  &m[i][j]   );
       }
    }

    for(int i = F - 1; i >=0; i--) {
        for(int j = 0; j < C; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

 return 0;
}
