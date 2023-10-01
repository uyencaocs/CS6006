#include <iostream>

int main(){
    int num = 0;
    std::cout << "Enter the emlement in array: ";
    std::cin >> num;

    int arr[] = {};

    for(int i = 0; i < num; i++){
        std::cout << "Enter the emlemt:" << i;
        std::cin >> arr[i];

    }
    int max = 0;
    bool is_prime = true;

    for(int i = 2; i < num; i++){
        if(arr[i] % i == 0){
            is_prime = false;
        }
        else{
            is_prime = true;
            max = arr[i];
            break;
        }

    }
    for(int i = 0; i < num; i++){
        if(arr[i] % i != 0){
            if(arr[i] > max){
                max = arr[i];
            }
        }
    }
    std::cout << "max" << max;

    return 0;

}