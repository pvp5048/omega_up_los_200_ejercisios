//19154. cisco-redes-upslp
include <iostream>
using namespace std;
int main()
 {
    int tama�o_paquete, ancho_banda;
    cin >> tama�o_paquete >> ancho_banda;
    int paquetes_por_segundo = ancho_banda / tama�o_paquete;
    cout << paquetes_por_segundo << endl;
    return 0;
}
