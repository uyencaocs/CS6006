# include <iostream>

int main ()
{
  while (1)
 {
    int N ;
    std::cin >> N ;
    std::cout << (( N % 5 == 0 && N >= 0) ? N /5 : -1) << " \ n ";
    }
    return 0;
}