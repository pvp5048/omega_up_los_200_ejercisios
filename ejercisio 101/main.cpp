//1568. Potencias de Dos
#include <iostream>
#include <string>

using namespace std;

string multiply(string a, string b) {
    string c(a.length() + b.length(), '0');
    for (int i = a.length() - 1; i >= 0; --i) {
        int carry = 0;
        for (int j = b.length() - 1; j >= 0; --j) {
            int temp = (a[i] - '0') * (b[j] - '0') + (c[i + j + 1] - '0') + carry;
            c[i + j + 1] = temp % 10 + '0';
            carry = temp / 10;
        }
        c[i] += carry;
    }
    size_t startpos = c.find_first_not_of("0");
    if (string::npos != startpos) {
        return c.substr(startpos);
    }
    return "0";
}

string powerOfTwo(int N) {
    string result = "1";
    for (int i = 0; i < N; ++i) {
        result = multiply(result, "2");
    }
    return result;
}

int main() {
    int N;
    cin >> N;
    string result = powerOfTwo(N);
    cout << result << endl;
    return 0;
}
