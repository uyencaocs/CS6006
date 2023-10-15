/*
 * data convertion (cast)
 * loss information
 * double a = 23.3;
 * int b = int(a); (explicit conversion)

 * @params:
 *     1) X: double
 *     2) arrs: array of double numbers
 * @return:
 *     1) ith-element of arrs, such that max(d(arrs[i], X))
 * @algor:
 *     1) distance : d(x, y) = |y - x|
 *     2) calculate the distance of X to each element of arrs
 *     3) store all the distances inside an array: tmp
 *     4) find the largest element inside tmp
 * @example:
 *     1) arrs = {-4, 4, 5, 8}
 *     2) X = 3
 *     3) tmp = {7, 1, 2, 5}  --> tmp[i] = |X - arrs[i]|
*/
#include <iostream>
using namespace std;

double* cal_distance(double X, int n, double arrs[]) {
    double tmp[100];
    for(int i = 0;i < n; i++){
      double distance = X - arrs[i];
      if(distance < 0){
        distance = -1 * distance;//implicit conversion
      }
      tmp[i] = distance;
    }
    return tmp;
}

double find_max(double tmp[], int n){
  double max = tmp[0];
  for(int i = 0; i < n; i++){
    if(max < tmp[i]){
      max = tmp[i];
    }
  }
  return max;

}

int main() {
  double X = 0;
  std::cin >> X ;
  int n = 0;
  std::cin >> n;
  double arrs[100];
  
  for (int i = 0; i < n; i++){
    std::cin >> arrs[i];
  }
  double* distance = cal_distance(X, n, arrs);
  double store = find_max(distance, n);
  std::cout << store;
  
  return 0;
}
