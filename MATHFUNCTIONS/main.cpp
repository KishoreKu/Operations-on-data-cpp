#include <iostream>
#include <cstdlib>

int main(){

  double weight{ 7.7 };

  //floor
  std::cout << "Weight round to floor is : " << std::floor(weight) << std::endl;

  //ceil
  std::cout << "Weight round to ceil is : " << std::ceil(weight) << std::endl;

  //abs
  std::cout << "weight absolute value is : " << std::abs(weight) << std::endl;

  double savings{ -5000 };

  std::cout << "Weight abs savings is : " << std::abs(savings) << std::endl;
   
  //exp: f(x) = e ^ x, where e = 2.71828 . Test the result here against a calculated

  double exponential = std::exp(10);
  std::cout << "The exponential of 10 is : " << exponential << std::endl;

  //pow
  std::cout << "3 ^ 4 is : " << std::pow(3,4) << std::endl;
  std::cout << "9 ^ 3 is : " << std::pow(9,3) << std::endl;

  //log : reverse function of pow if 2^3 = 8, log 8 in base 2 = 3. Log is like as
  //to which exponent should we elevate 2 to get eight ? log, by default computes to in base e. There also is another
  //function uses base 10 called log10

  //Try the reverse operation of e^4 = 54.59, it will be log 54.59 in base e = ?
  std::cout << "log; to get 54.59, you would elevate e to the power of : " << std::log(54.59) << std::endl;

  //log10, 10^4 = 10000, to get 10000, you'd need to elevate 10 to the power of
  std::cout << "to get 10000, you'd need to elevate 10 to the power of : " << log10(10000) << std::endl;
  
  return 0;
}