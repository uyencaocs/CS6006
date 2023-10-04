#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    int odd_number = 0;
    for(int divisor = 1; divisor < n; divisor++){
        if (n % divisor == 0){
            if (divisor % 2 != 0){
                odd_number = divisor;
                std::cout << odd_number << " " ;
            }
        }

    }
    if (odd_number = 0){
        std::cout << " there are no odd divisor";
    }
    return 0;
}