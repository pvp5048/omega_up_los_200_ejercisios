//2580. Bisiesto - Es o no bisiesto
#include<iostream>
#include<stdio.h>
#include <vector>
#include <stdlib.h>

#define ll long long int


using namespace std;

bool esBis( int year )
{
	return ((year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0));
}


int main() {

    int A;
    scanf("%d", &A);

    if(esBis(A)) {
        printf("ES BISIESTO\n");
    } else {
        printf("NO ES BISIESTO\n");
    }

 return 0;
}
