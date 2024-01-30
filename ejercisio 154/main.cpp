//2361. E/S-Terna pitagórica
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {


    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a * a + b * b == c * c) {
        printf("SI\n");
    }else {
        printf("NO\n");
    }

 return 0;
}
