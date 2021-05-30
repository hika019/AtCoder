#include "iostream"
#include <algorithm>


int main(){
  long long int n , i;
  long long int k;
  std::cin >> n >> k;

  long long int tomo[n][2];
  long long int en[n];
  long long int hoge [n];
  long long int array[n][2];

  for(i=0; i<n; ++i){
    std::cin >> tomo[i][0] >> hoge[i];
    tomo[i][1] = i;
  }

    std::sort(tomo, tomo+n);



    //std::sort(en, en+n);
    //std::sort(array, array+n);

    for(i=0; i<n; i++){

      if(k-array[0][n] >= 0){
        k+=array[1][n];
      }else{
        break;
      }

    }
  std::cout << k << '\n';

  return 0;
}
