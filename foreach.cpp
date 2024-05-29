#include <stdio.h>
#include <iostream>

int main(){

    //foreach loop = loop that eases the traversal over an iterable data type

    char names[] = {'A', 'B', 'C', 'D'};
    for(char name : names){
        std::cout << name;
    }

    int grades[] = {45, 90, 89, 78, 67};
    for (int i: grades){
        std::cout << i;
    }
    return 0;

}