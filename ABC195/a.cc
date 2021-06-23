#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
using namespace std;

int main(){
  int m, h;
  std::cin >> m >> h;

  if(h%m == 0)std::cout << "Yes" << '\n';
  else std::cout << "No" << '\n';

  return 0;
}
