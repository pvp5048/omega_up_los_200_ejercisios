//484. Promedio de 5 calificaciones
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int suma = 0;
    int calificacion;
    for (int i = 0; i < 5; ++i)
    {
        cin >> calificacion;
        suma += calificacion;
    }
    float promedio = suma / 5.0;
    promedio = round(promedio * 10) / 10.0;
    cout << fixed << setprecision(1) << promedio << endl;
    return 0;
}
