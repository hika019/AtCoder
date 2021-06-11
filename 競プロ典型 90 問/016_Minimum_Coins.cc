#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
  int n, a[3], i, j, k, tmp, ans = 500000;
  std::cin >> n;
  cin >> a[0] >> a[1] >> a[2];

  sort(a, a+3);

  for(i=0; a[2]*i<=n; ++i){
    for(j=0; a[2]*i + a[1]*j<=n; ++j){
      tmp = n-(a[2]*i + a[1]*j);
      if(tmp % a[0] == 0){
        ans = min(ans, i+j+(tmp / a[0]));

        //std::cout << i << j  << '\n';
      }
    }
  }

  std::cout << ans << '\n';

  return 0;
}
