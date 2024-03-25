#include <iostream>

void get_names(std::string names){
  for(int i = 0; i <names.length; i++)
    std::cout << names[i];
}

void print_hello(std::string name, int age){
    for(int i = 0 i < 7; i++){
    std::cout << "Hello" << name;

    }
    std::cout << "You are " << age;
}
int main(){
   
   get_names(["n", "w", " 3"]);
   print_hello("Asriel");

    return 0;
}