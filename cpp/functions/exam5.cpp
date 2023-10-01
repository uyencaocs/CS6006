#include <iostream>

int main(){

for(int i = 1; i < 11;i++){
    if(i == 5){
        continue;
    }

    std::cout << i;
}

return 0;
}