#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

bool es_primo(int n, int iteraciones);
bool miller_rabin(int n, int m, int k);
int potenciar(int b, int c, int n);
int tamanio_binario(int entero);
void buscar_suma(int posible_primo, int* p, int* q);
void int_a_binario(int entero, vector<bool>* binario);

bool es_primo(int n, int iteraciones)
{
	if (n <= 1 || n == 4)
    {
		return false;
	}
	if (n <= 3)
	{
		return true;
	}
	int k = 0;
	int m = n - 1;
	while (m % 2 == 0)
	{
		k++;
		m /= 2;
	}
	for (int i = 0; i < iteraciones; i++)
	{
		if (miller_rabin(n,m,k) == false)
		{
			return false;
		}
	}
	return true;
}

bool miller_rabin(int n, int m, int k)
{
    int b;
    int a;
	a = 2 + rand() % (n - 4);
	b = potenciar(a,m,n);
	if (b == 1 || b == (n-1))
    {
		return true;
	}
	for (int i = 0; i < k; i++)
	{
		b = potenciar(b, 2, n);
		if (b == (n - 1))
		{
			return true;
		}
		else if(b == 1)
		{
			return false;
		}
	}
    return false;
}

int potenciar(int b, int c, int n)
{
	int l;
	unsigned int z = 1;
	l = tamanio_binario(c);
	for (int i = l - 1 ; i >= 0 ; i--)
    {
		z = (z*z) % n;
		if ((c>>i) & 1)
		{
			z = (b*z) % n;
		}
	}
	return (int)z;
}

int tamanio_binario(int entero)
{
    int tamanio = 1;
    int i = 1;
    while (i<entero){
        tamanio++;
        i*=2;
    }
    return tamanio;
 }

void buscar_suma(int posible_primo, int* p, int* q)
{
 	for(int i = 2; i <= posible_primo/2; i++)
    {
 		if(es_primo(i,2))
 		{
 			*p = i;
 			if(es_primo(posible_primo-i,2))
 			{
 				*q = posible_primo-i;
 				if(p < q)
 				{
 					int aux = *p;
 					*p = *q;
 					*q = aux;
 				}
 				break;
 			}
 			else
 			{
 				*p = 0;
 				*q = 0;
 			}
 		}
 	}
 }

 int main(void)
 {
 	int posible_primo;
 	int p = 0, q = 0;
 	cin >> posible_primo;
 	if(es_primo(posible_primo,2))
    {
 		cout << posible_primo << " 0" << endl;
 	}
 	else
 	{
 		buscar_suma(posible_primo, &p, &q);
 		cout << p << " " << q << endl;
 	}
 	return 0;
 }
