//1262. Rebases
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int cont = 0;
    for (int i = N - 1; i > 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                cont++;
            }
        }
    }

    cout << cont << endl;

    return 0;
}
