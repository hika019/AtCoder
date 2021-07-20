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
  int n, a, x, y, ans =0;
  std::cin >> n >> a >> x >> y;

  if((n-a)>=0) ans = a*x;
  else ans = n*x;

  if((n-a)>0) ans += (n-a)*y;

  std::cout << ans << '\n';


  return 0;
}
