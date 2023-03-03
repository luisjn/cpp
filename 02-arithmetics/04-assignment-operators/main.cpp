#include <iostream>

using namespace std;

int main()
{
  int a = 0;
  cout << "Variable\t\tOperation\tResult\n";
  cout << "a = " << a;
  a += 2;
  cout << "\t\t\ta += 2 \t\t a = " << a << "\n";

  cout << "a = " << a << " : ";
  a -= 4;
  cout << "\t\ta -= 4 \t\t a = " << a << "\n";

  int b = 3;
  cout << "a = " << a << ", b = " << b << " : ";
  a *= b;
  cout << "\ta *= b \t\t a = " << a << "\n";

  cout << "a = " << a << ", b = " << b << " : ";
  a /= b;
  cout << "\ta /= b \t\t a = " << a << "\n";

  return 0;
}
