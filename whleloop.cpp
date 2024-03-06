#include <iostream>

int main(){
    
    std::string name;
    std::cout << "Enter name";
    std::getline(std::cin, name);

    while(name.empty()){
        std::cout<< "Enter again";
        std::getline(std::cin, name);
        std::cout << "Hello" << name;

    }

}