#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter the name";
    std::getline(std::cin >> std::ws, name);

    //name.length() = gets length of a string
    //name.empty() = returns true or false if string is empty or not
    // name.clear() = clears data in string
    // name.append() = adds string to another string
    // name.at(index) = gets character at index
    // name.find(); = gets index of character
    // name.erase() = erases portion of list
    name.at(0);
    name.insert(0, "&");
    name.find(" ")

    name.append("@opl.com");
    if (name.length() > 12){
        std::cout << "Your name can't be over twelve letters";

    }
    else if(name.empty()){
        std::cout << "Name is empty";
    }
    else {
        std::cout << "welcome, " << name;
    }


    return 0;
}