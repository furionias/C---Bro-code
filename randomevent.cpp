#include <iostream>
#include <ctime>

int main(){

    srand(time(0));

    int randnum = rand() % 6;

    switch(randnum){

        case 1:
           std::cout << "You win The Dutch cup";
           break;
        
        case 2:
          std::cout << "DFB Pokal";
          break;
        
        case 3:
          std::cout<<"Premier League";
          break;
        
        case 4:
          std::cout  <<"Eredivisie";
          break;
        

      

    }
    return 0;
}