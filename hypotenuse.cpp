#include <iostream>
#include <math.h>

typedef int io;

unsigned int hypotenuse(){
    double x;
    double y;
    double z;
    std::cout << "Enter X:";
    std::cin >> x;

    x = pow(x, 2);
    y = pow(y, 2);

    std::cout << "Enter Y:";
    std::cin >> y;

    z = sqrt((x) + (y));
    return z;


}
int main(){

    int r = hypotenuse();
    std::cout << r ;
}