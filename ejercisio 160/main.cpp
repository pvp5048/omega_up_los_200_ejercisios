//422. E amelborP
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {

        for (int i = s.length() - 1; i >= 0; i--) {
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}
