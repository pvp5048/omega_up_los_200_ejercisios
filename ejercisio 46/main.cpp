//4826. 'Sumas Veleanas
#include <stdio.h>
#include <stdlib.h>

int* shell(int* A, int n);

int main(void)
{
    int* serie1 = NULL;
    int* serie2 = NULL;
    int n;
    int* resultado;
    int suma;
    int i, j;
    int acarreo = 0;
    scanf("%d", &n);
    resultado = (int*)malloc(n * sizeof(int));
    serie1 = (int*)malloc(2 * n * sizeof(int));
    serie2 = (int*)malloc(2 * n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &serie1[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &serie2[i]);
    }
    serie1 = shell(serie1, n);
    serie2 = shell(serie2, n);
    for (i = n - 1, j = 0; i >= 0; i--, j++)
    {
        suma = serie1[i] + serie2[j] + acarreo;
        if (suma >= 10)
        {
            if (i != 0)
            {
                resultado[i] = suma - 10;
                acarreo = 1;
            }
            else
                resultado[i] = suma;
        }
        else
        {
            resultado[i] = suma;
            acarreo = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", resultado[i]);
    }
    printf("\n");
    return 0;
}

int* shell(int* A, int n)
{
    int gap;
    int i;
    int j;
    int temp;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            for (j = i - gap; j >= 0 && A[j] > A[j + gap]; j -= gap)
            {
                temp = A[j];
                A[j] = A[j + gap];
                A[j + gap] = temp;
            }
        }
    }
    return A;
}
