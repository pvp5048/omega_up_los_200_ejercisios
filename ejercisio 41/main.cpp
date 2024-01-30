//8700. ASCII for first four characters
#include <iostream>

using namespace std;

int main(){
    int t1;

    string t0;

    cin >> t0;

    if ( t0.size() > 4 )
    {
        t1 = 4;
    }
    else
    {
        t1 = t0.size();
    }


    for ( int x = 0; x < t1; x++ )
    {
    	cout << t0[x] << " ASCII value is " << int ( t0[x] ) << endl;
    }

    return 0;
}
