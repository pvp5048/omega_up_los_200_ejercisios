//1963. pb Sumando
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int matriz[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    int sumas[N];
    int i = 0;

    for(int col = 0; col < N; col++)
    {
        int sum = 0;
        for(int fila = 0; fila < N; fila++)
        {
            sum += matriz[fila][col];
        }
        sumas[i++] = sum;
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d ", sumas[i]);
    }

    return 0;
}
