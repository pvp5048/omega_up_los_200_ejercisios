//3880. Estaciones
#include <iostream>
using namespace std;

int main()
{
    int ordinal_mes;
    cin >> ordinal_mes;
    string estacion;
    switch (ordinal_mes)
    {
        case 3:
        case 4:
        case 5:
            estacion = "PRIMAVERA";
            break;
        case 6:
        case 7:
        case 8:
            estacion = "VERANO";
            break;
        case 9:
        case 10:
        case 11:
            estacion = "OTONIO";
            break;
        case 12:
        case 1:
        case 2:
            estacion = "INVIERNO";
            break;
        default:
            estacion = "ERROR";
    }

    cout << estacion << endl;

    return 0;
}
