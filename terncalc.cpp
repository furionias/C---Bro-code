#include  <iostream>


typedef std::string str;
int main(){


    std::string t;
    int temp;

    std::cout << "Temperature calculator\n";
    std::cout << "Enter symbol: F or C:";
    std::cin >> t;

    if (t == "F" || "f"){
        std::cout << "Temperature in celcius: ";
        std::cin >> temp;

        int result = (1.8 * temp) + 32.0;
        std::cout << "Temperature" << temp << "F";

    }

    else if(t == "C" || "c"){
        std::cout << "Temperature in Fahrenheit";
        std::cin >> temp;

        int result = (temp - 32) / 1.8;
        std::cout << "Temperature " << temp << "C";

    }
    else {
        std::cout << "Please enter C or F";
    }

}