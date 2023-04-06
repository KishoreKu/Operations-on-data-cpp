#include <iostream>
#include <iomanip>

int main(){

std::cout << std::setbase(16);
std::cout << "255 in hexadecimal format : " << 255 << std::endl;  

std::cout << std::setbase(8);
std::cout << "255 in octal : " << 255 << std::endl;
std::cout << std::setfill('*');
std::cout << "lastname" << std::setw(14) << "firstname" <<  std::endl;
std::cout << "lastname" << std::setw(14) << "firstname" <<  std::endl;
std::cout << "lastname" << std::setw(14) << "firstname" <<  std::endl;
std::cout << "lastname" << std::setw(14) << "firstname" <<  std::endl;

return 0;

}