//2672. Desaparición Calculada
#include<iostream>
#include<stdio.h>
#include <vector>
#include <stdlib.h>

#define ll long long int

using namespace std;


int main() {

    int N;
    scanf("%d", &N);

    //int fichas[N-1];
    int sum =0;
    for(int i =0; i < N - 1; i++) {
       // scanf("%d", &fichas[i]);
        int e;
        scanf("%d", &e);
        sum += e;
    }

    printf("%d", ((N *(N+1))/2) - sum);

 return 0;
}
