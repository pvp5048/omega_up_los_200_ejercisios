//1900. Números pitagóricos
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int terna[] = {a, b, c};
    std::sort(terna, terna + 3);

    if(terna[0] * terna[0] + terna[1] * terna[1] == terna[2] * terna[2]) {
        printf("Si\n");
    } else {
        printf("No\n");
    }

    return 0;
}
