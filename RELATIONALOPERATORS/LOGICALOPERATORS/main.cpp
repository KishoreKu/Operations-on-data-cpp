#include <iostream>

int main(){
  
  bool a {true};
  bool b {false};
  bool c {true};

  std::cout << std::boolalpha;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;
  std::cout << "c : " << c << std::endl;

  //AND : Evaluates to true when all operands are true.
  // A single flase operand will drag the entire expression to evaluating false.

  std::cout << std::endl;
  std::cout << "Basic and operations" << std::endl;
  std::cout << "a && b : " << (a && b) << std::endl;
  std::cout << "a && c : " << (a && c) << std::endl;
  std::cout << "b && c : " << (b && c) << std::endl;

  //OR : evaluates false if all are false

  std::cout << "a || b : " << (a || b) << "\n";

  return 0;
  
}