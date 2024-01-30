//5798. Divisores
#include <iostream>

using namespace std;
int main()
{
    int n, i, cont=0;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        if(n % i == 0)
            cont++;
    }

    cout << cont << endl;

    return 0;
}
