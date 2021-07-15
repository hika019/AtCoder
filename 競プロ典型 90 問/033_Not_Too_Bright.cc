#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
#include <string>
#include <map>
using namespace std;
 
int main(int argc, char const *argv[]) {
  double h, w,ans;
 
 
  std::cin >> h >> w;
 
  ans = ceil(w/2)*ceil(h/2);
  if(w==1||h==1) ans = w*h;
  std::cout << ans << '\n';
 
  return 0;
}