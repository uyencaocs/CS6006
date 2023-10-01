#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    float Sum = 0;
    int i = 0;
    
    for (int i = 1; i <= n; i++){
        Sum += 1.0/(2*i);
    }
    std::cout << "Sum: " << Sum;
}