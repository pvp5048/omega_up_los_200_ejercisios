//1261. Orden Creciente
#include <iostream>

using namespace std;

void ordenCreciente(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) {
            cout << "NO";
            return;
        }
    }
    cout << "SI";
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    ordenCreciente(arr, N);

    return 0;
}
