//154. Botas
#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;


int main() {


    int N ;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    std::map<int,int> m;
    for(int i = 0; i < N; i++) {
        m[arr[i]]++;
    }

    int answer = 0;
    for(std::map<int,int>::iterator it = m.begin(); it != m.end(); it++) {
        if(it->second % 2 != 0) {
            answer++;
        }
    }

    printf("%d", answer);

 return 0;
}
