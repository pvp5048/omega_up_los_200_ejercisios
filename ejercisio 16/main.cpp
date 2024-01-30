//111. Bisiesto
#include <iostream>
using namespace std;

char es_bisiesto(int anio)
{
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
    {
        return 'S';
    } else {
        return 'N';
    }
}

int main()
{

    int N;
    cin >> N;

    char resultados[N];


    for (int i = 0; i < N; ++i)
    {
        int anio;
        cin >> anio;
        resultados[i] = es_bisiesto(anio);
    }


    for (int i = 0; i < N; ++i)
    {
        cout << resultados[i] << endl;
    }

    return 0;
}
