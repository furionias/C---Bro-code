#include <iostream>


void grade_system(){
   char grade;
   std::cout << "Enter your grade as a letter here:";

   std::cin >> grade;

   switch(grade){

      case 'A':
        std::cout << "You did amazing";
        break;
      
      case 'B':
        std::cout << "You did good";
        break;
      
      case 'C':
        std::cout << "You did okay";
        break;
      
      case 'D':
        std::cout << "You did less okay";
        break;
      
      case 'F':
        std::cout << "You Flopped";
        break;
      
      default:
        std::cout << "Enter valid letter grade";
      
   }

}
int main(){

    // switch = alternative to using many else if statements

    int monthnum;

    std::cout << "Enter the month:";
    std::cin >> monthnum;

    switch(monthnum){
       case 1:
          std::cout << "It is January\n";
       case 2:
          std::cout << "It is February\n";
          break;
       case 3:
          std::cout << "It is March\n";
          break;
       case 4:
          std::cout << "It is April\n";
          break;
       
       
       default: // if there are no matching, the default statement will run
         std::cout << "No month, matching number" << "\n";
    }

    char name;

    std::cout << "Enter First letter of name:";
    std::cin >> name;

    switch(name){
      case 'A':
         std::cout << "The first letter of your name is A\n";
         break;
      
      case 'B':
         std::cout << "The first letter of your name is B\n";
         break;
      
      default:
      std::cout << "Not valid\n";

    }
}