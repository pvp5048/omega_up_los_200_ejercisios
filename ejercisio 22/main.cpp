//376. Calificaciones
#include <iostream>
#include <cmath>
using namespace std;

int calcularCalificacionFinal(int calificacionExamen)
{

    int distanciaCero = abs(calificacionExamen - 0);
    int distanciaSiete = abs(calificacionExamen - 7);
    int distanciaDiez = abs(calificacionExamen - 10);


    if (distanciaCero <= distanciaSiete && distanciaCero <= distanciaDiez)
    {
        return 0;
    }
    else if (distanciaSiete <= distanciaCero && distanciaSiete <= distanciaDiez)
    {
        return 7;
    }
    else
    {
        return 10;
    }
}

int main()
{

    int calificacionExamen;
    while (cin >> calificacionExamen)
    {
        cout << calcularCalificacionFinal(calificacionExamen) << endl;
    }

    return 0;
}
