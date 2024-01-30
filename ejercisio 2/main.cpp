//19071. Pares en Rango
#include <iostream>
using namespace std;

int main()
{

  int N, M, P;
  cin >> N >> M >> P;

  if(P == 0) {
    for(int i = N; i <= M; i++) {
      cout << i << endl;
    }
  }
  else if(P == 1) {
    for(int i = N; i <= M; i++) {
      if(i % 2 == 0) {
        cout << i << endl;
      }
    }
  }
  else if(P == 2) {
    for(int i = N; i <= M; i++) {
      if(i % 2 != 0) {
        cout << i << endl;
      }
    }
  }

  return 0;
}
