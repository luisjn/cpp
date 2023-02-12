#include <iostream>

using namespace std;

int main()
{
  float in1, in2;
  char operation;
  float answer;

  cout << "Enter two numbers:\n";
  cin >> in1;
  cin >> in2;
  cout << "Enter the operation '+','-','*','/':\n";
  cin >> operation;

  switch (operation)
  {
  case ('+'):
  {
    answer = in1 + in2;
    break;
  }
  case ('-'):
  {
    answer = in1 - in2;
    break;
  }
  case ('*'):
  {
    answer = in1 * in2;
    break;
  }
  case ('/'):
  {
    answer = in1 / in2;
    break;
  }
  default:
    cout << "Illegal operation";
  }

  cout << in1 << operation << in2 << " = " << answer << "\n";

  return 0;
}
