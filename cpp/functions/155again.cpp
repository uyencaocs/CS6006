/**2023-10-14
 * nhap vao mang so thuc tim so thuc xa voi so thuc X nhat
 * co 3 bai toan can giai.
 *  tim do dai cua mang 
 *  tim do dai tu 0 den index cua X 
 * tim do dai con lai
 * 
 * array[100] = {-4 , -1 ,0 ,4};
 * gia xu X = 1 --> -4
 * th X = -1 --> 4
 * 
 */



#include <iostream>

void swap(double &index, double &b){ //doi cho 2 phan tu voi nhau/
    double temp = index;
    index = b;
    b = temp;
}
void sortarray(double array[100], int N){
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(array[i] > array[j] ){
                swap(array[i],array[j]);
            }
        }
    }
}
int main(){
    int N = 4;
    double array[100] = {-4 , -1 ,0 ,4};
    double X = 0;
    //std::cin >> X;
    
    //std::cin >> N;
    int lenght = N; //tim do dai cua mang/
    
    sortarray(array, N);
    for(int i = 0; i < N; i++){
        std::cout << array[i];
    }
    double faster = 0;
    if(X > 0){
        faster = array[0];
    }
    else{
         faster = array[N];
    }
    std::cout << faster;
    return 0;
    
    }



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
