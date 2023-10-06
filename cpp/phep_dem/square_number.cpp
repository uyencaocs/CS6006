/* 2023/10/06
* find square number 
* use for loop if n = square * square 
*/

#include <iostream>

int main(){
    int n = 0;
    std::cin >> n;
    int square_number = 1;
    int square = 0;
    for(square_number; square_number < n; square_number++){
        if(n % square_number == 0){
            if (square_number * square_number == n){
                square += 1; 
            }
        }
    }
    if (square > 0){
    std::cout<< n << " This is square number";
    }
    else{
    std::cout << n << " this is not square number";
    }
    return 0;
}