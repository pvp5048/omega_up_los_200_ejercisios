//657. Árbol de navidad
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int lim = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < lim; j++)
        {
            cout << "*";
        }
        lim += 2;
        cout << std::endl;
    }

    for (int i = 0; i < lim / 2 - 2; i++)
    {
        cout << " ";
    }
    cout << "###" << endl;
    for (int i = 0; i < lim / 2 - 2; i++)
    {
        cout << " ";
    }
    cout << "###" << std::endl;

    cin.get();
    return 0;
}
