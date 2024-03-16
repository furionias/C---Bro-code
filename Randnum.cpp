#include <iostream>


int main (){


    srand(NULL);

    int randint = rand() % 6; // gets the numbers 0 through 5
    int randnum = rand() % 7;
    int randnum = ((rand() % 100));
    int randnum = ((rand() % 6)+1);
    int randnum = ((rand() % 6)+1);
    std::cout<< randnum;
     return 0;
}