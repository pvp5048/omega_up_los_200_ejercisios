//4902. 'Cajas de dulces'
#include <iostream>
#include <stdio.h>
#include <set>
#include <map>
#include <vector>
#include <algorithm>


using namespace std;

int main() {

	int N, K;
	scanf("%d%d", &N, &K);

	int arr[N];
	for(int i =0; i<N; i++) {
		int elem;
		scanf("%d", &elem);
		arr[i] = elem;
	}

	int sum = 0;
    int i;
    for (i = 0; i < K; i++)
    {
        sum += arr[i];
    }

    int max_sum = sum;

    for (i =0 ;i + K < N; i++)
    {
        sum -= arr[i];
        sum += arr[i + K];
        max_sum = max(max_sum, sum);
    }


    cout << (max_sum) << endl;

	return 0;
}
