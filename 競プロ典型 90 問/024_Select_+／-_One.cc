#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
#include <string>
using namespace std;

int main(){
  long int n, k, count=0;
  std::cin >> n >> k;

  int a[n], b[n];
  for(int i=0; i<n; ++i) std::cin >> a[i];
  for(int i=0; i<n; ++i) std::cin >> b[i];

  for(int i=0; i<n; ++i){
    count += abs(a[i]-b[i]);
  }
  //std::cout << count << '\n';

  if(count>=k) std::cout << "No" << '\n';//countがkを超えた場合がある
  else if((k-count)%2 == 0) std::cout << "Yes" << '\n';
  else std::cout << "No" << '\n';


  return 0;
}
