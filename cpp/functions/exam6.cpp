#include <iostream>

int main() {
    int num_numbers = 0;
    std::cout << "Enter the emlement has in array : ";
    std::cin >> num_numbers;
    
    int arr[100] = {};
    
    for (int i = 0; i < n; i++) {	
        std::cout << "Enter the element " << i << " : ";
        std::cin >> arr[i];
		
    }
    
    int max = 0;
    
    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0){
            max = arr[i];
            break;
        }
	
    }
    
    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            if(arr[i] > max){
                max = arr[i];
            }
        }
    }
    std::cout << "max : " << max;
    
    return 0;
}
