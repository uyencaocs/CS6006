#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    int even_divisor = 0;
    for(int divisor = 1; divisor < n; divisor++){
        if (n % divisor == 0){
            if (divisor % 2 == 0){
                 even_divisor = divisor;
                std::cout <<  even_divisor << " " ;
            }
        }

    }
    if ( even_divisor = 0){
        std::cout << " there are no even_divisor";
    }
    return 0;
}