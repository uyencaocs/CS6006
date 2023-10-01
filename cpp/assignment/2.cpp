#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    long sum = 0;
    int i = 0;
    for (i; i <= n; i++){
        sum = sum + i*i;
    }
std::cout << sum;
return 0;
}