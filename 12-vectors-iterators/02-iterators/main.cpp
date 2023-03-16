#include "main.hpp"

int main()
{
  vector<float> vFloat;

  std::cout << "vFloat has " << vFloat.size() << " elements\n";

  std::cout << "\n\nAdding 10 elements to the vector\n";

  vFloat.assign(10, 8.8);
  std::cout << "vFloat has " << vFloat.size() << " elements\n";

  // Call the function here to print out each element of vFloat
  printVector(vFloat);

  return 0;
}
