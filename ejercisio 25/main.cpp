//389. Comparaciones
#include <iostream>
using namespace std;
int main()
 {
    int valor1, valor2;
    cin >> valor1 >> valor2;
    if (valor1 == valor2)
    {
        cout << "iguales" << endl;
    }
    else if (valor1 < valor2)
    {
        cout << "menor" << endl;
    }
    else
    {
        cout << "mayor" << endl;
    }

    return 0;
}
