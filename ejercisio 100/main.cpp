//4254. Problema A
#include <iostream>
#include <stdio.h>

#define ll long long int

using namespace std;


int main() {




   int N;
   scanf("%d", &N);

   ll arr[N];
   for(int i =0; i<N; i++) {
      scanf("%lld", &arr[i]);
   }

    ll max_prod = 0;
    for(int i =0; i<N; i++) {
     for(int j =0; j<N; j++) {
         if(i!= j) {
           max_prod = std::max(max_prod, arr[i] * arr[j]);
        }
      }
    }
    printf("%lld\n", max_prod);

 return 0;
}
