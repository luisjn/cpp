#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
  string stringLength, stringWidth;
  float length = 0;
  float width = 0;
  float area = 0;

  cout << "Enter the length of the room: ";
  // get the length as a string
  getline(cin, stringLength);
  // convert to a float
  stringstream(stringLength) >> length;
  // get the width as a string
  cout << "Enter width: ";
  getline(cin, stringWidth);
  // convert to a float
  stringstream(stringWidth) >> width;
  area = length * width;
  cout << "\nThe area of the room is: " << area << endl;
  return 0;
}
