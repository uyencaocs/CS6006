#include <iostream>

int main(){
    int n = 0;
    std::cin>> n;
    int mulitiplication  = 1;
    int divisor = 1;
    for(divisor; divisor <  n; divisor++){
        if(n % divisor == 0){
            mulitiplication = divisor * mulitiplication ;
        }
    }  
    if(mulitiplication > 1){
        std::cout<< mulitiplication;
    }
    else{
        std::cout << "not have divisor";
    }
    return 0;
}   