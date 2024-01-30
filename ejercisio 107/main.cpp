//1229. Ordenar
#include <iostream>

using namespace std;

void ordenar(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int indice = i;
        while (indice > 0 && arr[indice] < arr[indice - 1]) {
            int temp = arr[indice];
            arr[indice] = arr[indice - 1];
            arr[indice - 1] = temp;
            indice--;
        }
    }
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    ordenar(arr, N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
