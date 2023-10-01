#include <iostream>

int main() {
    int num_numbers = 0;
    std::cout << "Enter the emlement has in array : ";
    std::cin >> num_numbers;
    
    int arr[100] = {};
    
    for (int i = 0; i < num_numbers; i++) {	
        std::cout << "Enter the element " << i << " : ";
        std::cin >> arr[i];		
    }

    int max = -1;
    for (int idx = 0; idx < num_numbers; idx++){
        if (arr[idx] % 2 == 0){
            max = idx;
            break;
        }

    }

    for(int idx = 0; idx < num_numbers; idx++){
        if(arr[i] % 2 == 0){
            if(arr[max] < arr[idx]){
                max = idx;
            }
        }
    }

    if(max % 2 == 0){
        std::cout << "max : " << max;
    }else{
        std::cout << "Doesn't exist.";
    }

}
