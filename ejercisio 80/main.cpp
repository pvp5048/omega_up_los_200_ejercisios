//2264. Suma de vectores
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

     int N;
     scanf("%d", &N);

     std::vector<int> a;
     for(int i =0; i < N; i++) {
        int elem;
        scanf("%d", &elem);
        a.push_back(elem);
     }

     std::vector<int> b;
     for(int i =0; i < N; i++) {
         int elem;
         scanf("%d", &elem);
         b.push_back(elem);
     }

     std::vector<int> c;
     for(int i =0; i <N; i++) {
        c.push_back(a[i] + b[i]);
     }

     for(int i =0; i < N; i++) {
         printf("%d ", c[i]);
        }


    return 0;
}
