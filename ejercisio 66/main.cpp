//314. Xbox Live Points
#include<iostream>
#include <vector>

using namespace std;

int maxSubArraySum(const vector<int>& a)
{
    int max_so_far = a[0];
    int curr_max = a[0];

    for (size_t i = 1; i < a.size(); i++)
    {
        curr_max = max(a[i], curr_max + a[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}

int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cout << maxSubArraySum(arr) << endl;

    cin.get();
    return 0;
}
