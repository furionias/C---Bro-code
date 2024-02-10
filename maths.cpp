#include <iostream>
#include <math.h>

int main (){

    double x = 5;
    double y =9;
    double z;

    z = std:: max(x, y);// returns the greater of two values
    double p = std::min(x,y); // returns the minimum of two values

    std:: cout << z << "\n";

    int u = pow(x, y); // raises a number to apower
    int o = sqrt(9); // square roots a number

    std::cout << u << "\n";
    std::cout << o << "\n";

    int h = abs(-3); // turns the value into a program
    std::cout << h;

    double n = round(9.0);// rounds a number
    double m = ceil(12); // rounds number up
    double q = floor (12); // rounds number down


}