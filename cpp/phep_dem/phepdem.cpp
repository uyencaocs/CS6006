#include <iostream>

int main(){
    int arr[100];
    int n; 
    int sum = 0;
    std::cin >> n;
    for (int index = 0; index < n; index++){
        std::cin >> arr[index];
    }
    for(int index = 0; index <= n; index++){
        if (arr[index] > 0){
            sum += 1;
    }   
       
    }
    std::cout<< sum;
    return 0;
}