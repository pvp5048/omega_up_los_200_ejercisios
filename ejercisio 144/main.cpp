//776. 1 Escribir al reves
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>


using namespace std;


int main() {


    std::string cad ;
    // cin >> cad;
    std::getline (std::cin,cad);
    for(int i =cad.length()-1; i>=0; i--) {
       cout << cad[i];
    }
    printf("\n");

 return 0;
}
