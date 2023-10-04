#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    int perfect = 1;
    int sum = 0;
    for(perfect; n > perfect; perfect++){
        if(n % perfect == 0){
            sum += perfect;
        }
    }
    if(sum == n){
        std::cout << n << " this is a perfect number";
    }
    else {
        std::cout << "this is not perfect number";
    }
    return 0;
    
}