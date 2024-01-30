//2754. Ejercicio_STOCK
#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;

int main ()
{

  std::stack<int> mystack;

  int N;
  scanf("%d", &N);

  for (int i=0; i<N; ++i) {
    int e;
    scanf("%d", &e);
    mystack.push(e);
  }

  // std::cout << "Popping out elements...";
  while (!mystack.empty())
  {
     std::cout << mystack.top() << endl;
     mystack.pop();
  }
  std::cout << '\n';

  //  system("pause");

  return 0;

}
