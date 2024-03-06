#include <iostream>

void shape(){
    char symbol;
    int rows;
    int columns;

    std::cout << "Enter symbol:";
    std::cin >> symbol;

    std::cout << "Rows:";
    std::cin >> rows;

    std::cout << "Columns:";
    std::cin >> columns;

    for (int i = 0; i <= rows; i++){
        for (int j =0; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << "\n";
    }
}
int main(){

for (int i = 1; i <= 3; i++){
 for(int j = 1; j <= 10; j++){
     std::cout << i << ' ';
 }
 std::cout << "\n";
}

shape();
  return 0;
}