//2659. Excede1000
#include <iostream>
#include <stdio.h>
#include  <vector>

#define ll long long int

using namespace std;

int main() {


    int sum =0;
    int cont =0;
    int n;

    while(sum  <= 1000) {

       scanf("%d", &n);
       sum += n;
       cont ++;
    }

    printf("%d", cont );

 return 0;
}
