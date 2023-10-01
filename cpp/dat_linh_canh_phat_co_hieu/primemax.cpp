#include <iostream>

bool is_prime(int cnt){
    bool prime = true;
    for (int min = 2; min < cnt; min ++){
        if (cnt % min == 0){
            prime = false;
            break;
        }           

    }
    return prime;
}

int main(){
    int N = 0;
    std::cin >> N;
    for ( int cnt = N - 1; cnt >= 2; cnt--){
       
        if (is_prime(cnt) == true){
        std::cout << cnt ;
        break;
        }
    
    }
    
}