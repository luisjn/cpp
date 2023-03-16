#include <iostream>
#include <vector>

int main()
{
  std::vector<float> vFloat;
  std::cout << "vFloat has " << vFloat.size() << " elements\n";

  // Changing the size of vectorInts to 10
  vFloat.resize(10);
  std::cout << "\n\n vFloat now has " << vFloat.size() << " elements\n";

  return 0;
}
