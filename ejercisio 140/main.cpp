//2647. Fibonacci-B�sico
#include <iostream>
#include <stdio.h>
#include <map>
#include <limits>
#include <vector>
using namespace std;

int main() {

  int M;
  scanf("%d", &M);

  if(M == 1) {
        printf("1");
    } else {

      std::vector<int> fib;
      fib.push_back(1);
      fib.push_back(2);

       for (int i = 2;  ; i++){
            if (fib[i - 1] + fib[i - 2] >= M){
                break;
            }
            fib.push_back(fib[i - 1] + fib[i - 2]);
       }


        for(int i = 0; i < fib.size(); i++) {
            printf("%d ", fib[i]);
        }

    }

 return 0;
}
