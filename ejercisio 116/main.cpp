//488. M�ltiplos
#include <iostream>
#include <stdio.h>
#include <map>
#include <limits>
using namespace std;

int main() {


 int a,b;
 scanf("%d %d", &a, &b);

 int max = std::max(a, b);
 int min = a+b-max;

 if(max % min == 0) {
   printf("multiplos\n");
 } else {
   printf("no multiplos\n");
 }

 return 0;
}
