//2484. Súper sumas
#include <stdio.h>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    int sum = 0;
    for (int i = 0; i < N; i++) {
        int e;
        scanf("%d", &e);
        sum += e;
    }

    printf("%d\n", sum);

    return 0;
}
