#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    int sum = 0;
    int divisor = 1;
    for (divisor; divisor < n; divisor++){
        if(n % divisor == 0){
            if(divisor % 2 == 0){
                sum += divisor;
            }
        }
    }
    std::cout << sum ;
    return 0;
    
}