//1290. Diferenecia Mínima
#include <stdio.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int N;
	scanf("%d",&N);

 	std::vector<int> arr;
 	for(int i = 0; i < N; i++) {
 	    int elem;
		scanf("%d",&elem);
		arr.push_back(elem);
 	}

 	std::sort(arr.begin(), arr.end());

 	int minDif = arr[1] - arr[0];

 	for(int i = 2; i < N; i++){
 		minDif = std::min(minDif, arr[i] - arr[i-1]);
 	}

 	printf("%d",minDif);

	return 0;
}
