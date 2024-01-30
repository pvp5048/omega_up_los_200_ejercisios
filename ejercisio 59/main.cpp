//1962. pb Frecuencias
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int P, n;
    cin >> P >> n;

    std::vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    std::vector<int> frec(P + 1, 0);

    for (int i = 0; i < n; i++)
    {
        frec[arr[i]]++;
    }

    for (int i = 1; i <= P; i++)
    {
        cout << i << "-" << frec[i] <<endl;
    }

    return 0;
}
