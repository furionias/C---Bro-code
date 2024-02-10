#include <iostream>

int main(){

    // ternary operator ?: = replacement to an if/else statement
    //condition ? expression1 : expression2

    int grade= 78;
    int t;
    

    grade >= 60 ? std::cout <<"You pass\n": std::cout << "YouFlopped\n";


    int num = 9;

    num % 2 == 1 ? std::cout << "ODD": std::cout <<"EVEN";

    bool hungry = true;
    hungry == true ? std::cout << "You are hungry": std::cout << "You are not hungry";

    std::cout << (t ? "True": "False");
    return 0;


}