#include <iostream>

int main(){
    // fill = Fills range of elements with specific value

    // fill(begin, end, value)
    const int SIZE = 100;
    std::string foods[SIZE];

    fill(foods, foods+(SIZE/2), "Pizza");
    fill(foods+(SIZE/2), "hamburger");

    for(std::string food : foods){
        std::cout << food << "\n";
    }
}
