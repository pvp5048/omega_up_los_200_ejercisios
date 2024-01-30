//2360. E/S-Operaciones
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {

    int a,b;
    scanf("%d %d", &a, &b);

    printf("%d %d %d %d %d", a+b, a-b, a/b, a*b, a%b);

    return 0;
}
