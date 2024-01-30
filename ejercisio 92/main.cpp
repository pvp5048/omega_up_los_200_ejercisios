//2986. Reparte
#include <iostream>

using namespace std;

int main()
{

    int p, n;
    cin >> p >> n;


    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }


    int cociente = sum / p;
    int resto = sum % p;


    cout << cociente << " " << resto << endl;

    return 0;
}
