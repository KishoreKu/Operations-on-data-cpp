#include <iostream>

int main(){

  int value {45};

  std::cout << "the value is : " << value << std::endl;

  std::cout << std::endl;
  value = value + 5;
  //value +=5; // equivalent to value value = value +  5
  std::cout << "The value is (after +=5) : " << value << std::endl;
  
  std::cout << std::endl;
  value -=5; // equivalent to value = value - 5
  std::cout << "The value is (after -=5) : " << std::endl;

  value *= 2;
  std::cout << "The value (after *=2) : " << std::endl;

  return 0;
}