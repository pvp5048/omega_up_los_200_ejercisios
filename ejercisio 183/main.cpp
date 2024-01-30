//415. Caja Negra...
#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;


int main()
{

    int N;
    scanf("%d", &N);

    std::string s;
    cin >> s;

    std::map<char, int> m;

    for(int i = 0; i < N; i++) {
        m[s[i]]++;
    }

    char max_char;
    int max = 0;

    for(std::map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
       if(it->second > max) {
          max = it->second;
          max_char = it->first;
        }
    }

    cout << max_char << endl;


    return 0;
}
