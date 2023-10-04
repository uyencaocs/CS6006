#include <iostream>

int main(){
    int n = 0;
    std::cin>> n;
    int count = 0;
   
    for( int divisor = 1;divisor < n;divisor++){
        if(n % divisor == 0){
            if(divisor % 2 == 0){
                count += 1;
            }
        }

    }
    std::cout << count;
    return 0;
}