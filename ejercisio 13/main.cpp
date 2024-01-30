//65. Patos
#include <iostream>
#include <set>

using namespace std;

int main()
{

    int n;
    cin >> n;

    set<int> seen_ducks;

    for(int i = 0; i < n; i++)
    {
        int duck;
        cin >> duck;
        seen_ducks.insert(duck);
    }

    int max_duck = *seen_ducks.rbegin();
    int min_duck = *seen_ducks.begin();
    int range = max_duck - min_duck + 1;
    int num_missing = range - seen_ducks.size();

    cout << num_missing;

    return 0;
}
