#include <iostream>

bool isPrime(int number) {

	for (int i = 2; i * i <= number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{

	std::cout << "Enter the emlement has in array : "; 
	int n; 
	std::cin >> n;

	int arr[100] = {};

    int arrPrime[100] = {};

	for (int i = 0; i < n; i++) {
		do {
			std::cout << "Enter the element " << i << " : ";
			std::cin >> arr[i];
		} while (arr[i] <= 1);
	}

    int max = 0;

	for (int i = 0; i < n; i++) {
		if (isPrime(arr[i])) {
            
            if(i > max){
                max = i;

            }

		}
	}

    std::cout << "max : " << max;

	return 0;
}