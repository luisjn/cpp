#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int userInput[40];

  // Enter the numbers into an array called userInput
  for (int i = 0; i < 40; i++)
  {
    scanf("%d", &userInput[i]);
  }
  // print the array
  cout << "\nThe array\n";
  for (int i = 0; i < 40; i++)
  {
    cout << userInput[i] << " ";
  }
  // print the array in reverse order
  cout << "\n\nThe array in reverse order\n";
  for (int i = 39; i >= 0; i--)
  {
    cout << userInput[i] << " ";
  }
  // sorting the array
  for (int i = 0; i < 40; i++)
  {
    for (int j = 0; j < 39 - i; j++)
    {
      if (userInput[j] > userInput[j + 1])
      {
        int temp;
        temp = userInput[j];
        userInput[j] = userInput[j + 1];
        userInput[j + 1] = temp;
      }
    }
  }
  cout << "\n\nThe array sorted\n";
  for (int i = 0; i < 40; i++)
  {
    cout << userInput[i] << " ";
  }

  return 0;
}
