#include <iostream>
#include <limits>

int main(){

  std::cout << "the range for short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
  std::cout << "the range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;
  std::cout << "the range for unsigned int is from" << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;

 
  return 0;
}