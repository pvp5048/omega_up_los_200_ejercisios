//1294. Matriz Diagonal
#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int main() {

 int N;
 scanf("%d", &N);

 int m[N][N];

 for(int i =0;  i <N; i++) {
    for(int j = 0; j<N; j++) {
       scanf("%d", &m[i][j]);
    }
 }

 std::string answer = "SI";
 int p = m[0][0];
 for(int i = 0; i < N; i++){
       if(p !=  m[i][i]   ) {
            answer = "NO";
        }
 }

 cout << answer << endl;

 return 0;
}
