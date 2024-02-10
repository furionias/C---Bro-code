#include <iostream>

int main(){
    
    std::string name;
    int age;

    std::cout << "What is your name?:";
    std::cin >> name;

    std::cout << "What is your age?:";
    std::cin >> age;

    std::cout << "hello\t" << name;
    std::cout << "You are " << age << "years\n";

    // To get whole lines

    std::string name1;

    std::cout << "What is your name?:\n";
    std::getline(std::cin >> std::ws, name1); // removes white spaces

    std:: cout << "Your full name is" << name1;
    return 0;

}