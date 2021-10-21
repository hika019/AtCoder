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
  int x;
  std::cin >> x;
  if(x != 0 && x%100 == 0){
    std::cout << "Yes" << '\n';
  }else{
    std::cout << "No" << '\n';
  }

  return 0;
}
