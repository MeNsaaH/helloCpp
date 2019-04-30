// my first string
#include <iostream>
#include <string>
using namespace std;

#define NEW_LINE '\n'

int main ()
{
  string _string;
  const string tab = "\t"; // Declares a constant value
  _string = "This is " "one " "string";
  string fl = R"(this is just a raw string /
       continued on this line)";
  cout << tab << _string << NEW_LINE << fl << endl;
  string helloWorld ("Hello World");
  string hiEarth {" and Hi Earth"};
  cout << helloWorld << hiEarth;
  return 0;
}
