//1293. Cuadro M�gico
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int cuadrado[3][3];

    std::string estado = "SI";

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j<3; j++) {
            scanf("%d", &cuadrado[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {

        int sumFila = 0;
        for(int j = 0; j < 3; j++) {
            sumFila += cuadrado[i][j];
        }
        if(sumFila != 15) {
             estado = "NO";
        }
    }

    for(int j = 0; j < 3; j++) {
        int sumCol = 0;
        for(int i =0; i < 3; i++) {
            sumCol += cuadrado[i][j];
        }
        if(sumCol != 15) {
          estado = "NO";
        }
    }

    int sd1 = 0;
    for(int i = 0; i < 3; i++) {
        sd1 += cuadrado[i][i];
    }
    if(sd1 != 15) {
        estado = "NO";
    }

    int sd2 = cuadrado[0][2] + cuadrado[1][1] + cuadrado[2][0];

    if(sd2 != 15) {
        estado = "NO";
    }

    cout << estado << endl;



 return 0;
}
