//1583. Tu Viaje Está Aquí
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cometa;
    string grupo;

    cin >> cometa >> grupo;

    int prod_cometa = 1;
    for (int i = 0; i < cometa.size(); i++)
    {
        prod_cometa *= cometa[i] - 64;
    }

    int prod_grupo = 1;
    for (int i = 0; i < grupo.size(); i++)
    {
        prod_grupo *= grupo[i] - 64;
    }

    if (prod_cometa % 47 == prod_grupo % 47)
    {
        printf("GO\n");
    }
    else 1583. Tu Viaje Está Aquí
    {
        printf("STAY\n");
    }

    return 0;
}
