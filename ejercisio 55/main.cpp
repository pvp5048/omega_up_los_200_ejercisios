//1932. pb Triángulo
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> lados = {a, b, c};
    sort(lados.begin(), lados.end());

    if (lados[0] * lados[0] + lados[1] * lados[1] == lados[2] * lados[2])
    {
        reverse(lados.begin(), lados.end());

        for (int i = 0; i < lados.size(); i++)
        {
            cout << lados[i] << " ";
        }
    }
    else
    {
        cout << "imposible";
    }

    return 0;
}
