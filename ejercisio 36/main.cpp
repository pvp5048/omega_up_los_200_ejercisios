//4511. occ09sfns21
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T;
    char d;
    cin >> S >> T >> d;
    string resultante;
    for (int i = 0; i < S.length(); ++i)
    {
        if (d == '1')
        {
            resultante += S[i];
            resultante += T[i];
        }
        else
        {
            resultante += T[i];
            resultante += S[i];
        }
    }
    cout << resultante << endl;

    return 0;
}
