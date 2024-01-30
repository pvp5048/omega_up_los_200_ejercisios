//1102. sedes
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sedes[n];
    for (int i = 0; i < n; i++)
    {
        cin >> sedes[i];
    }

    int min = sedes[0], max = sedes[0];
    for (int i = 0; i < n; i++)
    {
        min = std::min(min, sedes[i]);
        max = std::max(max, sedes[i]);
    }

    cout << max - min << endl;

    return 0;
}
