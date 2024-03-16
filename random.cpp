#include <iostream>

int main(){

    //pseudo-random - NOT truly random (but close)
    srand(time(NULL));

    int num = rand();
    std::cout << num;

    return 0;
}
