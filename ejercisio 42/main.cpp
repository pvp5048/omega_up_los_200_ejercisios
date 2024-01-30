//11240. Ayuda a una Tienda
#include <iostream>
#include <iomanip>
using namespace std;

double calcularDescuento(double monto)
{
    if (monto < 500)
        return 0;
    else if (monto <= 1000)
        return monto * 0.05;
    else if (monto <= 7000)
        return monto * 0.11;
    else if (monto <= 15000)
        return monto * 0.18;
    else
        return monto * 0.25;
}

int main()
{
    double montoCompra;
    while (cin >> montoCompra)
    {
        double descuento = calcularDescuento(montoCompra);
        double montoPagar = montoCompra - descuento;
        cout << fixed << setprecision(2) << montoPagar << endl;
    }
    return 0;
}
