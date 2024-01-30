//973. Día-mes-año
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string meses[] = {"", "enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int M;
        cin >> M;

        if (M >= 1 && M <= 12)
        {
            cout << meses[M] << endl;
        }
        else
        {
            cout << "Error" << endl;
        }
    }

    return 0;
}
