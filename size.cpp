#include <iostream>


int main(){

    // sizeof() = determines the size in bytes of a: class, object variable
    double grade = 100.0;
    std::string name = "Asriel";
    char grades[] = {'1', '9'};
    bool value = false;
    std::string students[] = {"a1","a2", "a3", "a4"};
    std::cout << sizeof(grade)  << " bytes\n";
    std::cout << sizeof(name) <<"\n"; // remains at 32 bytes as string is a reference data type
    std::cout << sizeof(grades) << "\n"; // number of bytes represents number of itesms in array
    std::cout << sizeof(value) << "\n";//1 as it is one single value
    std::cout << sizeof(char) << "elements";
    std::cout << sizeof(grades) /sizeof(char) << "elements\n";
    std::cout << sizeof(students)/sizeof(std::string) << "elements";
    

    return 0;
}