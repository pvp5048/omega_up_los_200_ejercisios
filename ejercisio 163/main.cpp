//423. Dos Veces
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {

        for (char &c : s) {
            c = toupper(c);
        }
        cout << s << endl;


        for (char &c : s) {
            c = tolower(c);
        }
        cout << s << endl;
    }

    return 0;
}
