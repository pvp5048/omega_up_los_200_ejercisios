//656. EJ1. B�squeda Lineal
#include<iostream>
#include<stdio.h>
#include <vector>
#include <stdlib.h>

#define ll long long int

using namespace std;


int main() {


    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i =0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int A;
    scanf("%d", &A);

    std::string respuesta = "NO";

    for(int i = 0; i < N; i++) {
        if(A == arr[i]) {
            respuesta = "SI";
            break;
        }
    }

    cout << respuesta << endl;

 return 0;
}
