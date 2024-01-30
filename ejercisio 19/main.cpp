//158. Tablas
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {

        int numero;
        cin >> numero;

        for (int j = 1; j <= 10; ++j)
        {
            cout << numero << "x" << j << "=" << (numero * j) << endl;
        }

        if (i < N - 1)
        {
            cout << endl;
        }
    }

    return 0;
}
