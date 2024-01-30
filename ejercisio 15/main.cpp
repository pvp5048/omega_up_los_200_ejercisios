//97. Amigos
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string names[n];
    for(int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    int graph[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    int q;
    cin >> q;

    while(q--)
    {
        string name1, name2;
        cin >> name1 >> name2;

        int idx1 = -1, idx2 = -1;
        for(int i = 0; i < n; i++)
        {
            if(names[i] == name1) idx1 = i;
            if(names[i] == name2) idx2 = i;
        }

        if(idx1 >= 0 && idx2 >= 0)
        {
            cout << graph[idx1][idx2] << "\n";
        }
    }

    return 0;
}
