#include <iostream>


int main(){

   // array = a data structure that can hold different types of data
   
   //To define an array
   std::string arr[] = {"Name1", "Name2"};

   //To define an array with a set number of values
   // std::string  arr2[rows] [columns];
   std::string arr1[4];
   arr[0] = "Q";
   arr[1] = "E";
   arr[2] = "W";
   arr[3] = "R";

   std::cout << arr[0];

   double prices[] = {12.8, 67.9, 23.0, 45.0};
   std::cout << prices[0];
  
  

    return 0;
}