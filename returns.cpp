#include <iostream>

double square(double length);
double cube(double length);
std::string concatStrings(std::string string1, std::string string2);
int main(){
   
    double length = 5.0;
    double area = square(length);
    double cube1 = cube(length);
    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Area (cubed): " << cube << "cm^3\n";

    std::string first_name = "Asriel";
    std::string last_name = "Ezeife";
    
    std::string full_name = concatStrings(first_name, last_name);
    std::cout << full_name;


    return 0;
}
double square(double length){
    double result = length * length;
    return result;
}
double cube(double length){
    double result = length * length * length;
    return result;
}

std::string concatStrings (std::string string1, std::string string2){
    return string1 + " " + string2;
}