#include <iostream>

int main(){

  //Braced Initializers
  //Variable may contain random garbage value. Warning
  int elephant_count;

  int lion_count{};//Initializes to zero
  
  int dog_count{10};//Initializes to Ten
  
  int cat_count{15};//Initializes to 15

  //Can use expression as Initializer
  int domesticated_animals { dog_count + cat_count };//Initializes to zero

  return 0;
   
}