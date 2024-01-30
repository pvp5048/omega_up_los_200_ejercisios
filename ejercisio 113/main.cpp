//1538. Números NO Fibonacci
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    vector<int> fib;
    fib.push_back(1);
    fib.push_back(2);

    for (int i = 2; fib[i - 1] < n - 1; i++) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }

    for (int i = 0; i < fib.size() - 1; i++) {
        for (int j = fib[i] + 1; j < fib[i + 1] && j < n; j++) {
            cout << j << " ";
        }
    }

    return 0;
}
