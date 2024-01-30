//10629. Area del circulo
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int x0;
    cin >> x0;
    cout << fixed << setprecision(2) << M_PI * pow(x0, 2);
    return 0;
}
