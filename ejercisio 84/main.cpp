//1351. Sobre ruedas
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {

    int a, b, c;

    string input;
    getline(cin, input);

    stringstream ss(input);

    ss >> a >> b >> c;


    int p[] = {a, b, c};

    string ans = "NO CRASH";


    for (int i = 0; i < 3; i++) {
        if (p[i] <= 168) {

            ans = "CRASH ";
            ans += to_string(p[i]);
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
