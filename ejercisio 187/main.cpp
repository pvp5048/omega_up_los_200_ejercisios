//427. CR A contar 2.0
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {


  std::string input; // = "Esto es la prueba 5, he hecho 4 pruebas antes.";

  std::getline (std::cin,input);

  int sum = 0;
  for(int i = 0; i < input.size(); i++) {
        //printf("%c ", input[i]);
        if(input [i] >= '0' && input[i] <= '9') {
           //
            //printf("%c ", input[i]);

             sum += (int)(input[i] - '0');
        }
    }

    printf("%d\n", sum);

  return 0;
}
