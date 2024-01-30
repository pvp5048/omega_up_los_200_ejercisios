//375. Bolsas de dulces
#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;
    int gananciasTotales = 0;
    for (int i = 0; i < N; ++i)
    {
        int bolsasVendidas, precio;
        cin >> bolsasVendidas >> precio;
        gananciasTotales += bolsasVendidas * precio;
    }
    cout << gananciasTotales << endl;

    return 0;
}
