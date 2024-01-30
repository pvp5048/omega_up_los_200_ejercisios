//19182. Explorando resultados
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    // Convertir a mayúscula la primera letra
    input[0] = toupper(input[0]);

    // Convertir a mayúscula la letra después de cada espacio
    for(int i = 1; i < input.length(); i++) {
        if(input[i-1] == ' ') {
            input[i] = toupper(input[i]);
        }
    }

    cout << input;
    return 0;
}
