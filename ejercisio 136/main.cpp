//725. Gusano escalador
#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

    int n,u,d;
    scanf("%d %d %d", &n, &u, &d);

    int minutos = 0;
    int sum = 0;
    while(sum < n) {

        sum += u;
        minutos ++;

        if(sum >= n) {
           break;
        }

        sum -=d;
        minutos++;
    }

    printf("%d\n", minutos);

    return 0;

}
