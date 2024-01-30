//2535. MCD Euclides
#include <stdio.h>
#include <iostream>

using namespace std;

int gcdEuclid(int a, int b)  {
	if(a == 0) return b;
	return gcdEuclid(b%a, a);
}

int main() {

    int m, n;
    scanf("%d %d", &m, &n);

    int res = gcdEuclid(m,n);

    printf("%d",res);

 return 0;
}
