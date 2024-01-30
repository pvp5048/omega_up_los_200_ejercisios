//15318. Imprimiendo enteros por paridad
#include <iostream>
using namespace std;
int main()
{
    int n, p;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> p;

    if(p == 0) {
        for(int i = 0; i < n; i++)
        {
            if(arr[i] % 2 == 0)
            {
                cout << arr[i] << " ";
            }
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(arr[i] % 2 != 0)
            {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}
