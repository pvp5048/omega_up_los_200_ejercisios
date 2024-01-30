//129. Buscaminas
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {


    int M, N;

    scanf("%d %d", &M, &N);

    int A[M][N];

    for(int i =0; i < M; i++) {
        for(int j =0 ; j <N; j++) {
            int elem;
            scanf("%d", &elem);
            A[i][j] = elem;
        }
    }

    int B[M][N];


    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int cont = 0;
            if (i - 1 >=  0 && j-1>=0)
            {
                if (A[i - 1][ j - 1] == 1)
                {
                    cont++;
                }
            }
            if (i - 1 >= 0)
            {
                if (A[i - 1][j] == 1)
                {
                    cont++;
                }
            }
            if (i - 1 >= 0 && j + 1 < N)
            {
                if (A[i - 1][j + 1] == 1)
                {
                    cont++;
                }
            }

            if (j - 1 >= 0)
            {
                if (A[i][j - 1] == 1)
                {
                    cont++;
                }
            }
            if (A[i][j] == 1)
            {
                cont++;
            }
            if (j + 1 < N)
            {
                if (A[i][j + 1] == 1)
                {
                    cont++;
                }
            }

            if (i + 1 < M && j - 1 >= 0)
            {
                if (A[i + 1][j - 1] == 1)
                {
                    cont++;
                }
            }

            if (i + 1 < M)
            {
                if (A[i + 1][j] == 1)
                {
                    cont++;
                }
            }
            if (i + 1 < M && j + 1 < N)
            {
                if (A[i + 1][j + 1] == 1)
                {
                    cont++;
                }

            }


            B[i][ j] = cont;

        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            //Console.Write(B[i, j] + " ");
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }


    return 0;
}
