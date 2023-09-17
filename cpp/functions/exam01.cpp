#include <iostream>

int sum(int a, int b);
float sum(float a, float b);


int main()
{
    std::cout << sum(10, 5) << ' ';
    std::cout << sum(float(3.14), float(2.0));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}