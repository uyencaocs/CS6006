#include <iostream>

int main(){
    int array[100];
    int sum = 0;
    int n = 0;
    std::cin >> n;
    for(int index = 0; index < n; index++){
        std::cin >> array[index];
    }
    for(int index = 0; index < n; index++){
        if(array[index] % 2 == 0){
            sum += array[index];
        }

    }
    std::cout << sum;
    return 0;

}