#include <iostream>

int main(){

   char op;
   double num1;
   double num2;
   double result;

   std::cout << "*****Calculator*****";
   std::cout << "Enter operator:";
   std::cin >> op;

   std::cout << "Num 1:";
   std::cin >> num1;

   std::cout << "Num 2:";
   std::cin >> num2;


   switch(op){
        
        case '+':
          result = num1 + num2;
          std::cout<< result;
          break;
        
        case '-':
          result = num1 - num2;
          std::cout << result;
          break;
        
        case '/':
          result = num1 / num2;
          std::cout << result;
          break;
        
        case '*':
          result = num1 * num2;
          std::cout << result;
          break;
        

          
   }

   return 0;

}