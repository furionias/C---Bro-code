#include <iostream>

int main(){

    // && = chcks if two conditions are true
    // || = check if at least one of two conditions are true
    // ! = reverses the logical statement of its operand

    
    int temp;
    bool sunny = true;
    std::cout << "Enter the temperature";
    std::cin >> temp;

    if (temp > 0 && temp <  30){
        std::cout << "The temperature is good";
    }else {
        std::cout << "The temperature is not good";
    }

    if (sunny){
        std::cout << "It is sunny outside";
    }
    return 0;
}