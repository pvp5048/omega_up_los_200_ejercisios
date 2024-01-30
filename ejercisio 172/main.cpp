//1355. ¿Culto?
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;


int main() {

   int n;
   scanf("%d", &n);

    int cor=0, incor =0;
    for(int i =0; i<n; i++) {
        int c,in;
        scanf("%d %d", &c, &in);
        cor += c;
        incor +=in;
    }

    if(cor > incor) {
       printf("CULTO\n" );
    }else if(incor > cor) {
        printf("INCULTO\n");
    } else {
        printf("INDETERMINADO\n");
    }

 return 0;
}
