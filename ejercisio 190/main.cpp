//1053. Buscando Parejas
#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {


    //int[] hombres = { 15,19,21,26, 24, 28 };
    //int[] mujeres = { 20, 25, 26, 29 };

    int H,M;
    scanf("%d %d", &H, &M);

    std::vector<int> hombres;
    std::vector<int> mujeres;

    for(int i =0; i < H; i++) {
       int edadH ;
       scanf("%d", &edadH);
       hombres.push_back(edadH);
    }

    for(int i = 0; i < M; i++) {
        int edadM;
        scanf("%d", &edadM);
        mujeres.push_back(edadM);

    }

    sort(hombres.begin(), hombres.end());
    sort(mujeres.begin(), mujeres.end());

    int i = hombres.size() - 1, j = mujeres.size() - 1;

    while (i >= 0 && j >= 0)
    {
        i--;
        j--;
    }

    if (i == -1)
    {
        printf("No hay solteros\n");
    }
    else
    {
        int cont = 0;
        int menor = 0;
        while (i >= 0)
        {
            cont++;
            menor = hombres[i];
            i--;
        }
        printf("%d %d\n",cont, menor);

    }

   return 0;

}
