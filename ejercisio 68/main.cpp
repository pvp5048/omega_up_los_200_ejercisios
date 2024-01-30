//915. Velocidad límite
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    vector<int> vs(n);
    vector<int> vt(n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &vs[i], &vt[i]);
    }

    int millas = vs[0] * vt[0];
    for (int i = 1; i < n; i++)
    {
        millas += vs[i] * (vt[i] - vt[i - 1]);
    }

    printf("%d miles", millas);

    return 0;
}
