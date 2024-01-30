//1303. Matriz Transpuesta
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {

    int F, C;
    scanf("%d %d", &F, &C);

    int m[F][C];

    for(int i = 0; i < F; i++) {
        for(int j = 0; j < C; j++) {
           scanf("%d",  &m[i][j]);
        }
    }

    std::vector<std::vector<int > > res;

    for(int j = 0; j < C; j++) {
        std::vector<int> fila;
        for(int i = 0; i < F; i++){
           fila.push_back(m[i][j]);
        }
        res.push_back(fila);
    }

    for(int i =0 ; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

 return 0;
}
