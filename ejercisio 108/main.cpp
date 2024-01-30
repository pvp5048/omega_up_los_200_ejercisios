//10784. Ordenamiendo por frecuencia
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> ordenarPorFrecuencia(int arr[], int n) {
    unordered_map<int, int> frec;
    for (int i = 0; i < n; i++) {
        frec[arr[i]]++;
    }

    vector<pair<int, int>> items(frec.begin(), frec.end());
    sort(items.begin(), items.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second > b.second;
    });

    vector<int> res;
    for (const auto& item : items) {
        for (int i = 0; i < item.second; i++) {
            res.push_back(item.first);
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> res = ordenarPorFrecuencia(arr, n);
    for (const auto& item : res) {
        cout << item << " ";
    }

    return 0;
}
