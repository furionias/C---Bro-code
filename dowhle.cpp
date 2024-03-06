#include <iostream>


int main(){
    
    int number;
    do{
   
    std::cout << "Enter positive num:";
    std::cin >> number;
    }while(number <= 0);

    std::cout << "This is" << number;


}