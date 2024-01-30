//19159. Hogwarts
#include <iostream>
using namespace std;
int main()
{
    int ingredientes_actuales, ingredientes_necesarios;
    cin >> ingredientes_actuales >> ingredientes_necesarios;
    int ingredientes_adicionales = ingredientes_necesarios - ingredientes_actuales;
    cout << ingredientes_adicionales <<endl;
    return 0;
}
