#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    int num_ber = 0;
    for (int divisor = 1; divisor < n; divisor++){
        if (n % divisor == 0){
            num_ber = divisor;
            std::cout << num_ber << ' ';
        }
    }
    
    return 0;

}