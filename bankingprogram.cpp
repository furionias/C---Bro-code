#include <iostream>
#include <iomanip>

void showBalance (double balance){
    std::cout << "Your balance is £" << std::setprecision (2) << std::fixed << balance;

}
double deposit(){
    double amount;
    do{
    std::cout << "Enter amount to be deposited";
    std::cin >>amount;
    return amount;
    } while (amount <= 0);
 
}
double withdraw(double balance){

    double amount = 0;

    std::cout << "Withdraw amount";
    std::cin >> amount;

    if (amount > balance){
        std::cout << "insufficient funds";
        
    }

    else if (amount < 0){
        std::cout << "Not a valid amount";
    }

    else{
        return amount;
    }
}
int main(){
    double balance = 8889999.8999999;
    do{
    std::string choice;
    std::cout << "Enter command(balance, deposit, withdraw):";
    std::cin >> choice;

    switch(choice){

        case "balance":
           showBalance(balance);
           break;
        
        case "deposit":
           balance += deposit();
           showBalance(balance);
           break;
        
        case "withdraw":
           balance -= withdraw(80000);
           showBalance(balance);
           break;
        
        default:
         std::cout <<"Program end";
         break;
    }while(choice != "END");
    }

    return 0;
}

