//834. El Mayor Impar
#include <iostream>
#include <stdio.h>
#include <map>
#include <limits>
using namespace std;

int main() {

 int arr[5];

 int mi= -1000000;

 for(int i =0; i < 5; i++) {
    scanf("%d", &arr[i]);

    if(arr[i] % 2 != 0) {
        mi = arr[i];
    }
 }

 if(mi > -1000000) {


        for(int i = 0; i < 5; i++) {
            if(arr[i] % 2 != 0) {
                mi = std::max (mi, arr[i]);
            }
        }

    }

    printf("%d\n", mi);

 return 0;
}
