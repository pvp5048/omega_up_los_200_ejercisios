//2281. profr. gener-practica CONALEP--El Profesor--
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int aprob = 0, reprob = 0;
    for (int i = 0; i < n; i++)
    {
        int nota;
        cin >> nota;

        if (nota >= 6)
        {
            aprob++;
        }
        else
        {
            reprob++;
        }
    }

    cout << aprob << " " << reprob << endl;

    return 0;
}
