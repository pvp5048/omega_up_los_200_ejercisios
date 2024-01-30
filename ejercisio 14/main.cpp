//74. Triangulos
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

  int n;
  cin >> n;

  int sticks[n];
  for(int i = 0; i < n; i++)
  {
    cin >> sticks[i];
  }

  sort(sticks, sticks + n, greater<int>());

  int a = sticks[0];
  int b = sticks[1];
  int c = sticks[2];

  if(a < b + c)
  {
    cout << a + b + c;
  }
  else
  {
    cout << -1;
  }

  return 0;
}
