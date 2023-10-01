#include <iostream>

int main(){
    int N = 0 ;
    std::cin >> N;
    for(int i = 0; i < N; ++i){
        bool isprime = true ;
        for (int j = 2; j < i; ++j){
            if (i % j == 0);{
                isprime = false;
                break;
            }
        } if (isprime){
        --N;
        std::cout << i << '\n';
    }
    }
    return 0;
}