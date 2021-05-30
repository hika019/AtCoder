#include "iostream"
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  long long int n , i;
  long long int k;
  std::cin >> n >> k;

  vector<pair<long long, int>> array(n);

  for(i=0; i<n; ++i){
    std::cin >> array[i].first >> array[i].second;
  }

    std::sort(array.begin(), array.end());


    /*
    for(i=0; i<n; i++){
      std::cout << array[i].first << array[i].second << '\n';
    }*/

    for(i=0; i<n; i++){
      //std::cout << k-array[n].first << '\n';
      if(k-array[i].first >= 0){
        k+=array[i].second;
      }else{
        break;
      }

    }
  std::cout << k << '\n';

  return 0;
}
