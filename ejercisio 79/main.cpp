//2765. Sumando dos conjuntos
#include <stdio.h>

int main()
{

	int N;
	scanf("%d",&N);

	int a[N];
	int b[N];
	for(int i = 0; i < N; i++) {
		scanf("%d",&a[i]);
	}
	for(int i = 0; i < N; i++) {
		scanf("%d", &b[i]);
	}

	for(int i  = 0; i < N; i++) {
		printf("%d ", (a[i] + b[i]));
	}

	return 0;
}
