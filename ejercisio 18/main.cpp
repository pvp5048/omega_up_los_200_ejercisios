//153. Promedio
#include <iostream>
using namespace std;

int main()
{

    double primerParcial, calificacionFinal;
    cin >> primerParcial >> calificacionFinal;

    double segundoParcial = 2 * calificacionFinal - primerParcial;


    cout << segundoParcial << endl;

    return 0;
}
