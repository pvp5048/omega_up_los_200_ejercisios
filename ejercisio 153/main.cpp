//814. Ej2.- Orden inverso
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    std::string pals[n];

    for(int i = 0; i < n; i++) {
      std::string s;
      cin >> s;
      pals[i] = s;
    }

    for(int i = n- 1; i >=0 ; i--) {
        cout << pals[i] << endl;
    }

   return 0;
}
