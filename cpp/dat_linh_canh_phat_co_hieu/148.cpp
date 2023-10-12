/**2023-10-12
 * input an array find the last prime number of the array.
 * If not found, print -1
*/
#include <iostream>


int main(){
    int array[100];
    int N = 0;
    std::cin >> N;
    int prime = 0;
    for(int i = N - 1; i >= 0; i--){
        std::cin >> array[i];
        for(int index = 2; index < array[i]; index++){
            if (array[i] % index != 0){
                prime = array[i];
                break;
            }
            else{
                prime = -1;
            }

        }

    }
    std::cout << prime;
    return 0;


}