#include <iostream>

const int ui = () => {
    return 67;
}
double square(double length);
double cube(double length);

int main(){
   
    double length = 5.0;
    double area = square(length);
    int y = ui();
    double cube1 = cube(length)
    std::cout << "Area: " << area << "cm^2\n";
    std::cout << y;
    std::cout << "Area (cubed): " << cube << "cm^3\n";

    return 0;
}
double square(double length){
    double result = length * length;
    return result;
}
double cube(double length){
    double result = length * length * length;
    return result
}