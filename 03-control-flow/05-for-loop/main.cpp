#include <iostream>
// #include <cstddef>

using namespace std;

int main()
{
  float input;
  float sum = 0;

  // for(size_t i =0; i<5; i++)
  for (int i = 0; i < 5; i++)
  {
    cout << "What is the next number?\n";
    cin >> input;
    sum = sum + input;
  } // end of for loop

  cout << "Sum = " << sum << "\n";
  cout << "Average = " << sum / 5 << "\n";

  return 0;
}
