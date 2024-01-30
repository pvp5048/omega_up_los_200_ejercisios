//1331. Lada
#include <iostream>
#include <stdio.h>
#include <map>


using namespace std;

int main() {

 int N;
 scanf("%d", &N);

 std::map<int, std::string> m;
 m[61] = "Brasilia";
 m[71] = "Salvador";
 m[11] = "Sao Paulo";
 m[21] = "Rio de Janeiro";
 m[32] = "Juiz de Fora";
 m[19] = "Campinas";
 m[27] = "Vitoria";
 m[31] = "Belo Horizonte";

    map<int,std::string>::iterator it = m.find(N);

    if(it != m.end())
    {
       //element found;
       cout << m[N] <<endl;
    }else{
        cout << "LD no encontrada" << endl;
    }

 return 0;
}
