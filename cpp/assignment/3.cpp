#include <iostream>

int main(){
    int n = 0;
    std::cin>> n;
    float sum = 0;
    int i = 0;
    for (i = 1; i <= n; i ++){
        sum += (1.0 / i);
    }

    std::cout << sum;

return 0;
} 