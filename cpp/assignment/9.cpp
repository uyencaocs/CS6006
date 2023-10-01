#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    int sum = 1;
    int i = 0;
    for (i = 1; i <= n; i++){
        sum = sum * i; 
    }
    std::cout<< sum;
    return 0;

}