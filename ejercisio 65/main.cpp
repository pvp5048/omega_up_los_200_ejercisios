//1097. bolita
#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int p, m;
    cin >> p >> m;

    vector<int> arr(4, -1);
    arr[p - 1] = 1;

    for (int i = 0; i < m; i++)
    {
        int mov;
        cin >> mov;

        if (mov == 1)
        {
            swap(arr[0], arr[1]);
        }
        else if (mov == 2)
        {
            swap(arr[0], arr[2]);
        }
        else if (mov == 3)
        {
            swap(arr[0], arr[3]);
        }
        else if (mov == 4)
        {
            swap(arr[1], arr[2]);
        }
        else if (mov == 5)
        {
            swap(arr[1], arr[3]);
        }
        else if (mov == 6)
        {
            swap(arr[2], arr[3]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == 1)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    cin.get();
    return 0;
}
