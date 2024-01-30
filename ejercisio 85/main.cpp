//1605. Si te da
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    vector<int> nums;
    nums.push_back(a);
    nums.push_back(b);

    int i;
    for (i = 2; ; i++) {
        int next = (nums[i - 1] + nums[i - 2]) % 10;
        nums.push_back(next);

        if (nums[i - 1] == a && nums[i] == b) {
            break;
        }
    }


    for (int j = 0; j < nums.size(); j++) {
        cout << nums[j] << " ";
    }
    cout << endl;


    cout << i - 1 << endl;

    return 0;
}
