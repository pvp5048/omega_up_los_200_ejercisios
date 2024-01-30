//2472. Bisiesto
#include <iostream>
#include <stdio.h>

bool esBis( int year )
{
	return ((year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0));
}


int main() {

    int n;
    scanf("%d", &n);

    while(n--) {
        int A;
        scanf("%d", &A);

        if(esBis(A)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }


    return 0;
}
