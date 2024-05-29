#include <iostream>


int main(){
  // When array passed into function, it is turned into a pointer. Therefore, it requires a size for that function
    double prices[] = {6.99, 8.9, 64.7, 90.7};
    int size = sizeof(prices)/(prices[0]);
    double u = getTotal(prices, size);
    std::cout << u;
}
double getTotal(double temp[], int size){
    double total;
    for (int i = 0; i <size; i++){
         double total = total += temp[i];
         

    }
    return total;

}