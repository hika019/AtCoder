#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
using namespace std;

int main(){
  double a, b, w;

  std::cin >> a >> b >> w;

  w *= 1000;

  int min = 1e9, max = -1;
  for(int num=0; num < w+1; ++num){
    if(num*a <= w && w <= num*b){
      if(min > num)min = num;
      if(max < num)max = num;

    }
  }
  if(max != -1) std::cout << min << " " << max << '\n';
  else std::cout << "UNSATISFIABLE" << '\n';

  return 0;
}
