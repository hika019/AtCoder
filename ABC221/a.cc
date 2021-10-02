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
  int a, b, tmp, ans = 1;

  std::cin >> a >> b;

  tmp = a-b;
  for(int i=0; i<tmp; i++){
    ans *= 32;
  }
  std::cout << ans << '\n';

  return 0;
}
