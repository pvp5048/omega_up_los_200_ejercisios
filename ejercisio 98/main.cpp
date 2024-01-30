//4257. Problema D
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {


  int t;
  scanf("%d", &t);

  while(t--) {

      //------ENTRADA--------------------------------
         int n;
         scanf("%d", &n);

         string filas[n];
         for(int i =0; i < n; i++) {
            string f;
            cin >> f;

            filas[i] = f;
         }

       //--------ALGORITMO------------------------------

        std::vector<int> sumfilas;
        std::vector<int> sumcols;

        int totalcerezas =0;

        for(int i =0; i < n; i++) {
           int sf =0, sc =0;
           for(int j =0; j < n; j++) {
              if(filas[i][j] == '#') {
                sf++;
                totalcerezas++;
              }
              if(filas[j][i] == '#') {
                sc++;
              }
           }
           sumfilas.push_back(sf);
           sumcols.push_back(sc);
        }

        std::string ans = "NO";
        int sumporfila=0, sumporcol=0;
        for(int i =0; i<n; i++) {
           sumporfila += sumfilas[i];
           sumporcol += sumcols[i];
           if(totalcerezas - sumporfila == sumporfila || totalcerezas - sumporcol == sumporcol) {
               ans = "YES";
               break;
            }

        }

        cout << ans << endl;

  }


 return 0;
}
