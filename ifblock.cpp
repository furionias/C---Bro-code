#include <iostream>

using namespace std;
int main(){

    int age;

    cout << "Enter age:";
    std::cin >> age;

    if(age >=18 ){
        cout << "Wilkommen";
    } else if( age < 0){
        cout << "You haven't been born yet";
    }
    else if(age >= 100){
        cout << "You are too old";
    }
    else {
        cout << "None";
    }

}