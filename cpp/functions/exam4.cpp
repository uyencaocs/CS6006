#include <iostream>

int main(){
    long long int n = 0;
    long long int m = 0;
    long long int a = 0;
    long long int stonesl = 0;
    long long int stonesd = 0;
    std::cin >> n >> m >> a;
    if (n % a == 0)
    {
        stonesl = n / a;
    } 
    else{
        stonesl = n / a + 1; 
    }
    if(m % a == 0){
        stonesd = m / a;
    }
    else{
        stonesd = m / a + 1;
    }
    std::cout << stonesd * stonesl << '\n';


}









