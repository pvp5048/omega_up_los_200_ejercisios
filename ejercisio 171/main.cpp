//452. C�lculo simple
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;


int main() {


    int a, b;
    float c;

    float sum = 0;
    for(int i = 0; i < 2; i++) {

        scanf("%d %d %f", &a, &b, &c);
        sum += b*c;
    }

    printf("%.2f\n", sum);

 return 0;
}
