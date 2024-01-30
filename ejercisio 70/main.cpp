//2534. ULAM

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = N;
    cout << res << " ";

    while (res != 1)
    {
        if (res % 2 == 0)
        {
            res /= 2;
        }
        else
        {
            res = res * 3 + 1;
        }
        cout << res << " ";
    }

    return 0;
}
