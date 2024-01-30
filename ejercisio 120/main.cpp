//1354. Maximo de tres
#include <iostream>
#include <stdio.h>
using namespace std;


int main() {

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    int max = 0;
    if(a > b && a > c) {
        max=a;
    }else {
        if(b > c) {
            max =b;
        }else{
            max=c;
        }
    }

    printf("%d\n", max);

    return 0;
}
