#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int a[1001];

int main(){
  int n, ans = 0;

  std::cin >> n;
  for(int i=0; i<n; i++){
    std::cin >> a[i];
    if(a[i] >10){
      ans += a[i]-10;
    }
  }

  std::cout << ans << '\n';

  return 0;
}
