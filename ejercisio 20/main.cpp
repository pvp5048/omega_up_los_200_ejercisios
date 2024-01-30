//373. A contar lápices
#include <iostream>
#include <string>
using namespace std;

int contarDigitos(int numero, int digito)
{
    int contador = 0;

    string numeroStr = to_string(numero);

    for (char c : numeroStr)
    {
        if (c - '0' == digito)
        {
            contador++;
        }
    }

    return contador;
}

int main()
{

    int N, K;
    cin >> N >> K;

    int totalLapices = 0;
    for (int i = 0; i < N; ++i)
    {
        int numero;
        cin >> numero;
        totalLapices += contarDigitos(numero, K);
    }

    cout << totalLapices << endl;

    return 0;
}
