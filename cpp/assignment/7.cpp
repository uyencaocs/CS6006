#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    double Sum = 0.0;
    float i = 0;
    for (i = 1; i <= n; i++){
        Sum += i / (i + 1);
    }
    std::cout << Sum;
    return 0;

}