//508. LapTops
#include <iostream>
#include <stdio.h>
#include <vector>

//#include <conio.h>

using namespace std;


int main() {


    int N;
    scanf("%d", &N);

    int max = -1001, indice = 0;
    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) {
          max = arr[i];
          indice = i;
        }
    }

    printf("%d %d", indice + 1, max);


    //getch();


 return 0;
}
