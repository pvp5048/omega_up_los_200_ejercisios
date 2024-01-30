//2828. Contando Numbers
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  int n;
  scanf("%d",&n);

  int arr[n];
  for(int i =0; i < n; i++) {
        scanf("%d", &arr[i]);
  }

  int x;
  scanf("%d", &x);

  int cont =0;
  for(int i =0; i < n; i++) {
      if(arr[i] == x){
          cont ++;
        }
    }

  printf("%d", cont );

 return 0;
}
