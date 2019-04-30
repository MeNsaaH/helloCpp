// operating with variables

#include <iostream>
using namespace std;

int main ()
{
  // variable initialization
  int a { 5 };
  int b (2);
  auto c = a;
  decltype (c) d = 4;

  int result;

  // process:
  a = a + 1;
  result = a - b - c + d;

  // print out the result:
  cout << result;

  // terminate the program:
  return 0;
}
