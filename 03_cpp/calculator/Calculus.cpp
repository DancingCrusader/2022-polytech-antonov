#include <iostream>
#include "counter.h";
#include "returner.h";
using namespace std;
counter(int,int,char)
returner(string)

int main()
{
  char op;
  int a;
  int b;
  int result;
  returner("Please input a number");
  cin >> a;
  returner("Please input another number");
  cin >> b;
  returner("Please choose an operation \n Valid ones are: * / + - ^");
  cin >> op;
  returner(counter(a,b,op));
  return 0;
}
counter(a,b,op)
{
  switch (op)
  {
    case '+': /*plus*/
      return(a+b);
      break;
    case '-': /*minus*/
      return(a-b);
      break;
    case '*': /*mult*/
      return(a*b);
      break;
    case '/': /*div*/
      return(a/b);
      break;
    case '^': /*a to power of b*/
      int i, j;
      j = a;
      for(i=1; i<b; i++)
      {
        a*=j;
      }
      return(a);
      break;
  }
}

returner(result)
{
  std::cout << result << std::endl;
  return 0;
}
