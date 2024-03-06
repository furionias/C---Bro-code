#include <iostream>


using namespace std;
int main(){


    char op;
    int num1;
    int num2;
    int num3;
    int num4;

    cout << "Enter operation";
    cin >> op;


    cout << "Num 1:";
    cin >> num1;
    cout << "Num 2:";
    cin >> num2;
    cout << "Num 3";
    cin >> num3;
    cout << "Num 4:";
    cin >> num4;

    switch (op)
    {
    case '+':
      int result = num1 + num2 + num3 + num4;
      cout << result;
      break;

    case '-':
       int result = num1 - num2 - num3 - num4;
       cout << result;
       break;
    
    case '*':
       int result = num1 * num2 * num3 * num4;
       cout << result;
       break;
    
    case '/':
       int result = num1 / num2 / num3 / num4;
       cout << result;
       break;
      
    
    default:
      cout << -1;
        break;
    }
}