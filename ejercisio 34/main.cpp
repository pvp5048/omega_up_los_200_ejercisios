//419. Bajando los caracteres
#include <iostream>
using namespace std;

int main()
{
    string palabra;
    cin >> palabra;
    for (char c : palabra)
    {
        cout << c << endl;
    }

    return 0;
}
