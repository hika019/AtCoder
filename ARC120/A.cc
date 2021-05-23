#include "iostream"
#include <algorithm>
#include <numeric>

int main(){
  long long int n, max, array[200001] = {0}, i, mae = 0, j, sum;

  std::cin >> n;

  for(i=0; i<n; ++i){
    std::cin >> array[i];

    array[i] += *std::max_element(array, array+200001);

    sum = std::accumulate(array, array+200001, 0);
    std::cout << mae+ sum << '\n';
    mae = sum;


  }

  return 0;
}
