#include <iostream>

void calculator(){
    int num1;
    int num2;

    std::cout << "Enter value for num 1:";
    std::cin >> num1;
    std::cout << "Enter value for num 2:";
    std::cin >> num2;

    int operation;
    std::cout << "Enter operation: (1, 2, 3, 4):";
    std::cin >> operation;

    switch(operation){
        case 1:// multiply
          int result1;
          result1 = num1 * num2;
          std::cout<< result1 <<"\n";
          break;
        
        case 2:// add
          int result2;
          result2 = num1 + num2;
          std::cout << result2 << "\n";
          break;
        
        case 3:// division
          int result3;
          result3 = num1 / num2;
          std::cout << result3 << "\n";
          break;
        
        case 4: //subtraction
         int result4;
         result4 = num1 - num2;
         std::cout << result4 << "\n";
         break;
        
        default:// if none of the conditions apply
          std::cout << "W" << "\n";
          break;

        

    }




}
int main(){

  calculator();
}