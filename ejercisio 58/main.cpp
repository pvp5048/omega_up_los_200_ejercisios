//1964. pb Ordenando
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int sec[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sec[i]);
    }

    bool desc = true, asc = true;

    for (int i = 1; i < n; i++)
    {
        if (sec[i] > sec[i - 1])
        {
            desc = false;
        }
        if (sec[i] < sec[i - 1])
        {
            asc = false;
        }
    }

    if (!asc && !desc)
    {
        printf("NO ORDENADA");
    }
    else if (asc)
    {
        printf("CRECIENTE");
    }
    else
    {
        printf("DECRECIENTE");
    }
    return 0;
}
