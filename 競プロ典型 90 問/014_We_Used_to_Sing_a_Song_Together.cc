#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int a[100001];
int b[100001];

int main(){
  long long int n, i, ans;

  std::cin >> n;

  for(i=0; i<n; ++i)std::cin >> a[i];
  for(i=0; i<n; ++i)std::cin >> b[i];

  std::sort(a, a+n);
  std::sort(b, b+n);

  ans = 0;
  for(i=0; i<n; ++i){
    ans += std::abs(a[i]-b[i]);
  }

  std::cout << ans << '\n';

  return 0;
}
