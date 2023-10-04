/* 2023_10_02 
* find number odd max of divisor
*/
#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    int divis = 0;
    int max_odd = 0;
    for (int divisor = n - 1; divisor => 1; divisor--){
        if(divisor % 2 != 0){
            divisor = max_odd;
            if (n % divisor == 0){
                max_odd = divisor;
        }
        
        }
    }
    std::cout << max_odd ;
    return 0;

}