/**2023-10-10
 * input 3 number (a, b, c)
 * output the max number 
*/

#include <iostream>

int main(){
    int a = 0;
    std::cin >> a;
    int b = 0;
    std::cin >> b;
    int c = 0;
    std::cin >> c;
    int max = a;
    if(max < b){
        max = b;
    }
    if(max < c){
        max = c;
    }
    std::cout << "max: " << max;
    return 0;
    }