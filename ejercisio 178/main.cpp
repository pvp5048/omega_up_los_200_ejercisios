//2714. Colección de Letras
#include <iostream>
#include <stdio.h>

using namespace std;



int main() {

    int K;
    scanf("%d", &K);

    string linea;
    cin >> linea;

    int cont_d =0;
    for(int i = 0; i < linea.size(); i++) {
         if(linea[i] == 'd') {
                cont_d++;
            }
    }

    //printf("%d\n", cont_d);

    if( cont_d >= K) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

 return 0;
}
