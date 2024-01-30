//2985. Carretes
#include <iostream>
#include <stdio.h>

using namespace std;


int pasos(int inicial, int final)
{
    int pasos_derecha = 0;

    int indice = inicial;

    while (indice != final)
    {
        pasos_derecha++;

        indice++;

        if (indice > 9)
        {
            indice = 0;
        }

    }

    int pasos_izquierda = 0;
    indice = inicial;

    while (indice != final)
    {
        pasos_izquierda++;
        indice--;
        if (indice < 0)
        {
            indice = 9;
        }
    }

    return std::min(pasos_derecha, pasos_izquierda);

}

int main() {


    int N;
    scanf("%d", &N);

    string inicial; // = "5732"; // Console.ReadLine();
    string final; // = "1598"; // Console.ReadLine();
    cin >> inicial;
    cin >> final;

    int sum_pasos = 0;
    for (int i = 0; i < N; i++)
    {
        sum_pasos += pasos((int)inicial[i]-'0', (int)final[i]-'0');

    }

    printf("%d\n", sum_pasos);

 return 0;
}
