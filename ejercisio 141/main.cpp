//3152. Fibonacci Facil
#include <iostream>
#include <stdio.h>
#include <math.h>

#define ll long long int

using namespace std;

int main() {

   int k;
   scanf("%d", &k);

   int fib[] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987,
                1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393,
                 196418, 317811, 514229, 832040, 1346269 };

   printf("%d\n", fib[k]);

 return 0;
}
