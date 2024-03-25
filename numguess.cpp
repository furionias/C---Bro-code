#include <iostream>

int main(){
    
    int num;
    int guess;
    int tries;

    srand(NULL);
    int rand_num = ((rand() % 6)+ 1);
    do{
    
    std::cout<< "Enter guess";
    std::cin >> guess;
    if (guess != rand_num){
        std::cout << "Incorrect\n";
    }
    if (guess > rand_num){
        std::cout<< "Too high\n";
        tries++;
    }
    if (guess < rand_num){
        std::cout << "Too Low\n";
        tries++;
    }
    }while(guess != rand_num);

    std::cout<<"You win\n";
    std::cout << "You took " << tries << " tries";

    return 0;
}