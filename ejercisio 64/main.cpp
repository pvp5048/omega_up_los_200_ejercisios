//1246. Conjunto Permutado

#include <stdio.h>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

void esPermutacion(int a[], int b[], int n)
{

	std::map<int,int> map_a;
	for(int i = 0; i < n; i++)
  {
		int key = a[i];
		if(map_a.count(key))
    {
			map_a[key]++;
		}
    else
    {
			map_a[key] = 1;
		}
	}

	std::map<int,int> map_b;
	for(int i = 0; i < n; i++)
  {
		int key = b[i];
		if(map_b.count(key))
        {
			map_b[key]++;
		}
    else
        {
			map_b[key] = 1;
		}
  }

	for(std::map<int,int>::iterator it = map_a.begin(); it != map_a.end(); it++)
    {
		if(it->second != map_b[it->first])
        {
			printf("NO");
			return ;
		}
	}
	printf("SI");
}


int main()
{

	int N;
	scanf("%d",&N);
 	int a[N];
 	for(int i = 0; i < N; i++)
  {
 		scanf("%d",&a[i]);
 	}
 	int b[N];
	for(int i = 0 ; i < N; i++)
  {
		scanf("%d", &b[i]);
	}

	esPermutacion(a, b, N);

	return 0;
}
