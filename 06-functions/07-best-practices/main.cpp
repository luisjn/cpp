/*When passing variables that are not going to be modified in the function
**define the variable as a 'const' so that it cannot be changed by the function.
*/

#include <iostream>

using namespace std;

int doubleInput(const int input);

int main()
{
  int input = 2;
  int di = doubleInput(input);

  cout << di;
}

int doubleInput(const int input)
{
  int h = input * 2;
  return h;
}

/*This code will not compile:
**I have modified the variable input.

int doubleInput(const int input)
{
    input++;
    int h = input *2;
    return h;
}
*/
