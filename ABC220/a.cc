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
  int a, b, c, tmp;
  std::cin >> a >> b >> c;

  tmp = b/c;
  if (a <= tmp*c) {
    std::cout << tmp*c << '\n';
  }else{
    std::cout << -1 << '\n';
  }

  return 0;
}
