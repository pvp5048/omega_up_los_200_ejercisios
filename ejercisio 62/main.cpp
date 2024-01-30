//3223. japones
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string j[] = {"ichi", "ni", "zan", "yong", "go", "loku", "nana", "hatchi", "qiu", "yu"};

    if (n >= 1 && n <= 10)
    {
        cout << j[n - 1] << endl;
    }
    else
    {
        cout << "Número fuera de rango." << endl;
    }

    return 0;
}
