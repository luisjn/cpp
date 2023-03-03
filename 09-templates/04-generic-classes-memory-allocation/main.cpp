#include "main.hpp"

int main()
{
  // StudentRecord is the generic class
  // The constructor sets the grade value
  StudentRecord<int> srInt(0);
  srInt.setId(123456);
  int arrayInt[SIZE] = {1, 2, 3, 4};
  srInt.setGrades(arrayInt);
  srInt.printGrades();

  StudentRecord<char> srChar('A');
  srChar.setId(234567);
  char arrayChar[SIZE] = {'F', 'F', 'F', 'F', 'E'};
  srChar.setGrades(arrayChar);
  srChar.printGrades();

  StudentRecord<float> srFloat(0.0);
  srFloat.setId(345678);
  float arrayFloat[SIZE] = {2.75, 4.0, 3.7, 2.8, 3.99};
  srFloat.setGrades(arrayFloat);
  srFloat.printGrades();

  StudentRecord<string> srString("A");
  srString.setId(456789);
  string arrayString[SIZE] = {"B", "B-", "C+", "B", "A"};
  srString.setGrades(arrayString);
  srString.printGrades();

  return 0;
}
