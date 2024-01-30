//775. 1 El excursionista Mayor
#include <stdio.h>
#include <stdlib.h>

int shell(int *A, int n);

int main(void)
{
    int n;
    int *edades = NULL;
    scanf("%d\n",&n);
    edades = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&edades[i]);
    }
    printf("\n");
    printf("%d\n",shell(edades,n));
}


int
shell(int *A, int n)
{
  int gap;
  int i;
  int j;
  int temp;
  for (gap = n/2 ; gap > 0 ; gap /= 2)
  {
    for (i = gap; i < n ; i++)
    {
        for (j = i-gap ; j >= 0 && A[j] > A[j+gap] ; j -= gap)
        {
            temp = A[j];
            A[j] = A[j+gap];
            A[j+gap] = temp;
        }
    }
  }
  return A[n-1];
}
