//2967. Triángulo equilátero
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int p1, p2, p3, p4;
    cin >> p1 >> p2 >> p3 >> p4;

    map<int, int> m;

    m[p1]++;
    m[p2]++;
    m[p3]++;
    m[p4]++;

    int ans = 0;

    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        if (it->second == 3)
        {
            ans = 1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
