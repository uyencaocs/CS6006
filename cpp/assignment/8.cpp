#include <iostream>

int main(){
    int n = 0;
    std::cin>> n ;
    double sum = 0.0;
    float  i = 0;
    for(i = 0;i <= n; i++){
        sum += ((2 * i) + 1) / ((2 * i) + 2);
    }
    std::cout << sum;
    return 0;
}