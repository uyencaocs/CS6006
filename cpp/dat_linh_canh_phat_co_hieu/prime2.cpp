#include <iostream>

int main(){
    int N = 0;
    std::cin >> N;
    bool prime = true;
    for (int cnt = 2; cnt < N; cnt++){
        if (N % cnt == 0){
           prime = false;
        }
    }
    if (prime == true){
        std::cout << "this is prime";
    }
    else {
        std::cout << "this is not prime";
    }
}