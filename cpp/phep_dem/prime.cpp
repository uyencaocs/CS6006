#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    int prime = 2;
    int total = 0;
    for(prime; prime < n; prime++){
        if(n % prime == 0){
            total += 0;
        }
    }
    if(total > 0 ){
        std::cout<< n << " this is not prime number";
    }
    else{
        std::cout << n << " this is prime number";
    }
    return 0;
}