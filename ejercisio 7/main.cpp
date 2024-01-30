//19210. IsaacParedes
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int hits, atBats;
  cin >> hits >> atBats;

  if(atBats < 0 || atBats > 1000)
  {
    cout << "0.00";
    return 0;
  }

  if(hits < 0 || hits > atBats)
  {
    cout << "0.00";
    return 0;
  }

  double effectiveness = 0.0;
  if(atBats != 0)
  {
    effectiveness = (double)hits / atBats;
  }

  cout << fixed << setprecision(2) << effectiveness * 100 << endl;

  return 0;
}
