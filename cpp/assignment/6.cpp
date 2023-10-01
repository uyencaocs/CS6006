#include  <iostream>

int main(){
    double Sum = 0.0;
    int n = 0;
    std::cin >> n;
    int i = 0;
    for (i = 1; i <= n; i++){
        Sum += 1.0/(i* (i + 1));
    }
    std::cout << Sum ;
}