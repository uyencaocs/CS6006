/**2023-10-12
 * input an array find the first even number of the array
 *  If there is no even number, print ta -1
*/

#include <iostream>

int main(){
    int array[100]; /*input an array*/
    int N = 0;
    std::cin >> N;
    int index = 0;
    for(int i = 0; i < N; i++){
        std::cin >> array[i] ;
        if(array[i] % 2 == 0){  /* if index i of array % 2 ==0 --> this is even number*/
            index = array[i]; 
            break; /*find only one even number*/
        }
        else{
            index = -1; /*no even number*/
        }
    }
    std::cout << index;
    return 0;
}