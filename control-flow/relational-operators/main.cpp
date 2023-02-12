#include <iostream>
#include <string>

using namespace std;

int main()
{
  // instead of printing 0 and 1, create an array where
  // 0 = False, 1 = True
  string TorF[] = {"False", "True"};

  int a = 100;
  int b = 33;
  int c = 33;

  // Print out the string values of each relational operation
  cout << "a < b is " << TorF[a < b];
  cout << "\na > b is " << TorF[a > b];
  cout << "\na != b is " << TorF[a != b];
  cout << "\nc >= b is " << TorF[c >= b];
  cout << "\nc <= b is " << TorF[c <= b];

  return 0;
}
