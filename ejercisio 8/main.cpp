//19209. Carrera De Redondeo
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double distance, consumption;
    cin >> distance >> consumption;

    double totalFuel = distance * consumption;

    int roundedFuel = round(totalFuel);

    cout << roundedFuel << endl;

    return 0;
}
