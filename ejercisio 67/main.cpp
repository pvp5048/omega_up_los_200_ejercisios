//558. Vestidos
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int max = -1;
    int max_g = 0;
    int max_index = -1;

    for (int i = 1; i <= n; i++)
    {
        int g, p;
        scanf("%d %d", &g, &p);

        if (g > max_g && p <= m)
        {
            max_g = g;
            max_index = i;
        }
    }

    printf("%d\n", max_index);

    return 0;
}
