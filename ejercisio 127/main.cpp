//3967. Leyendo Varios Datos Reloaded
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  int n;
  scanf("%d", &n);

  for(int i =0; i<n; i++) {
      int a,b;
      scanf("%d", &a);
      scanf("%d", &b);

      printf("%d\n", a  + b);

  }

 return 0;
}
