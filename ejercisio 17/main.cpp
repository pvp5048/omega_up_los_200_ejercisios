//113. aMAYUSCULAS
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{

    string entrada;
    getline(cin, entrada);


    for (char &c : entrada)
    {
        c = toupper(c);
    }

    cout << entrada << endl;

    return 0;
}
