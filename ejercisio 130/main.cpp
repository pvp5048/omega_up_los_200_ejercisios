//2289. La edad de John Carter
#include <iostream>
#include <stdio.h>

#define ll long long int

using namespace std;

int main() {

    ll V;
    scanf("%lld", &V);
    //int dias[V];
    ll sum =0;
    for(int i = 0; i < V; i++) {
         ll dias;
         scanf("%lld", &dias) ;
         sum += dias;
        //scanf("%d", &dias[i]);
    }

    printf("%lld", sum / 365 );

 return 0;
}
