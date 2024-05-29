#include <iostream>

int main(){

    int numbers[] = {1,23, 45, 67, 90, 674};
    int size =sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;
    std::cout << "Enter element:";
    std::cin >> myNum;
    int index = search(numbers, size, myNum);
    std::string foods[] = {"Pizza", "Fish","Burger", "Curry", "Chips", "Crisps"}
    if(index != -1){
        std::cout << myNum << "is at index" << index;
    }
    else{
        std::cout << "No value found";
    }
    return 0;
}

int search(int nums[], int size, int element){
    

    for (int i =0; i<size; i++){
        if(element == nums[i]){
            std::cout<<"True";
             return i;
            break;
        }
    }
    return -1;
}
std::string foodsearch(std::string temp[]){
    std::string choice;
    std::cout << "Pick a food:";
    std::cin >> choice;

    for (int i = 0; i<sizeof(temp)/sizeof(temp[0]); i++){
           if (temp[i] == choice){
            std::cout << "Here you go";
            return temp[i];
           }
           

    }
    return "Negative";


}