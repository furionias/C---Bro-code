#include <stdio.h>
#include <iostream>

int main(){

    std::string names[] = {"Asriel", "w", "w"};
    char names[] = {'A', 'B', 'C', 'D'};
    for (int i =0; i<sizeof(names); i++;){
        std::cout << names[i] << "/n";
    }
    return 0;
}