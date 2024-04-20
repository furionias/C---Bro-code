#include <iostream>



char getUserChoice(){
    
    char player;
    do{
    std::cout << "Rock-paper-Scissors Game";
    std::cout << "Rock, paper, scissors (r, p, s):";
    std::cin >> player;

    std::cout << player;
    } while (player != 'r' &&player!= 'p' && player != 's');
    return player;

}
char getComputerChoice(){
    char symbol;
    std::cout << "Computer selection";
    std::cout << "0=rock, 1=paper, 2=scissors";
    srand(time(0));
    int comp = (rand() % 3 +1);
    std::cout << comp;

    if(comp = 1){
        symbol = 'r';
    }
    else if(comp == 2){
        symbol = 'p';
    }
    else {
        symbol = 's';
    }

}
void showChoice(char choice){

    switch (choice){
        case 'r':
          std::cout << "Rock\n";
          break;
        
        case 'p':
         std::cout << "Paper";
         break;
        
        case 's':
         std::cout<< "scissors";
         break;
    }

}
void chooseWinner(char player, char computer){

    switch (player){
        case 'r':
           if (computer == 'r'){
            std::cout << "It's a tie";
           } else if (computer == 'p'){
            std::cout << "Computer wins";
           } else if (computer =='s'){
              std::cout <<"Player wins";
           }
           break;
        
        case 'p':
          if (computer == 'r'){
               std::cout << "Player wins";
          }
          else if(computer == 'p'){
            std::cout << "Computer wins";
          } else if (computer == 's'){
            std::cout << "Computer wins";
          } break;


        case 's':
          if (computer == 'r'){
               std::cout << "computer wins";
          }
          else if(computer == 'p'){
            std::cout << "Player wins";
          } else if (computer == 's'){
            std::cout << "It's a tie";
          }
          break;
    }
}


int main(){

    
    char player;
    char computer;
    do{
    player = getUserChoice();
    std::cout << "Your choice";
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computer choice";
    showChoice(computer);

    } while(player == computer);

    chooseWinner(player, computer);

    return 0;

}