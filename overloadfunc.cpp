#include <iostream>

void bakePizza();
int main(){

 bakePizza();
 bakePizza("pepperoni");

 return 0;

}

void bakePizza(){
    std::cout << "Here is your pizza";

}

void bakePizza(std::string t1){
    std::cout << "Here is the topping" << t1;
}

void bakePizza(std::string t1, std::string t2){
    std::cout << "Here is the topping" << t1 << ":" << t2;
}