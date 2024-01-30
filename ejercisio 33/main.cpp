//7389. Si o No en caso se repita
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    unordered_set<int> numeros;
    numeros.insert(a);
    numeros.insert(b);
    numeros.insert(c);
    if (numeros.size() < 3)
    {
        cout << "Si" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
