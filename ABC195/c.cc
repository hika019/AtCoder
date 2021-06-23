#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
#include <string>
using namespace std;

int main(){
  int n, sum =0;
  std::cin >> n;


  for(int i=1; i<=floor(log10(n)+1)-3; ++i){
    int tmp = (n-(pow(1000, i)));
      std::cout << n-(pow(1000, i)) << '\n';
      std::cout << tmp << '\n';
  }
  std::cout << sum << '\n';



  return 0;
}
