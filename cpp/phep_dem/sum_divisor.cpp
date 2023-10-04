#include <iostream>

int main(){
    int N = 0;
    std::cin >> N;
    int sum = 0;
    int divisor = 1;
    for(divisor; N > divisor; divisor++){
        if(N % divisor == 0){
            sum += divisor;
        }

    }
    std::cout << sum;
    return 0;

}