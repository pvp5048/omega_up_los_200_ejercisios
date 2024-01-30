//3982. Imprime arreglo 1
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);


    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }


    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << "\n";
    }

    return 0;
}
