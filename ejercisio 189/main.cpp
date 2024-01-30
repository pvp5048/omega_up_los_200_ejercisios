//971. Buscando rotaciones
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    std::string palabra;
        std::getline(std::cin, palabra);

        std::string rotada;
        std::getline(std::cin, rotada);

    bool estado = false;


    for (int i = 0; i < rotada.length(); i++)
    {
        string post = rotada.substr(i, rotada.length() - i);
        string pre = rotada.substr(0, i);

        if (post + pre == palabra)
        {
            estado = true;
        }

    }
    //Console.WriteLine(estado);
    if(estado) {
        printf("Rotacion\n");
    } else {
        printf("No rotacion\n");
    }

    return 0;

}
