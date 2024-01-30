//2670. Barbulla Matemática
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  int n;
  scanf("%d", &n);
  int sum =0;

  for(int i=1; i<=n; i++) {
     sum += (i*(i+1))/2;
  }

  printf("%d\n", sum);

 return 0;
}
