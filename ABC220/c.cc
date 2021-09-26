#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
#include <string>
#include <map>
using namespace std;

int main(){
  long long int n, i, a_sum=0, X, ans, tmp;
  std::cin >> n;
  int A[n];
  for(i=0; i<n; i++){
    std::cin >> A[i];
    a_sum += A[i];
  }
  std::cin >> X;

  tmp = X/a_sum;
  ans = tmp*n;//6回
  X =X-(tmp*a_sum);
  // std::cout << ans << '\n';

  i=0;
  while(0<=X){
    X -= A[i];
    ans+=1;
    i++;
    // std::cout << i << X << '\n';
  }
  std::cout << ans << '\n';


  return 0;
}
