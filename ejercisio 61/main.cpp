//1947. pb Bardeando
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{


    int P, n;
    scanf("%d %d", &P, &n);

    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int elem;
        scanf("%d", &elem);
        sum += elem;
    }

    if(P >= sum)
    {
        printf("%d", P - sum);
    }
    else
    {
        printf("0");
    }

 return 0;
}
