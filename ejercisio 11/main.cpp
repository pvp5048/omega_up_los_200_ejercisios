//19154. cisco-redes-upslp
include <iostream>
using namespace std;
int main()
 {
    int tamaño_paquete, ancho_banda;
    cin >> tamaño_paquete >> ancho_banda;
    int paquetes_por_segundo = ancho_banda / tamaño_paquete;
    cout << paquetes_por_segundo << endl;
    return 0;
}
