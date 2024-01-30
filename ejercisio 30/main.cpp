//2203. Contando Ovejas
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int P;
    cin >> P;

    for (int i = 0; i < P; ++i)
    {
        int N;
        cin >> N;

        int countOvejas = 0;
        string animal;
        for (int j = 0; j < N; ++j)
        {
            cin >> animal;
            if (animal == "oveja")
            {
                countOvejas++;
            }
        }

        cout << countOvejas << endl;
    }

    return 0;
}
