#include <iostream>

int main(){
    int n = 0;
    std::cin>> n;
    int sum = 0;
    int divisor = 1;
    for(divisor; divisor <  n; divisor++){
        if(n % divisor == 0){
            sum += 1;
        }
    }  
    if(sum > 0){
        std::cout<< sum;
    }
    else{
        std::cout << "not have divisor";
    }
    return 0;
}   