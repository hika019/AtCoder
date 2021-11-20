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
  int s, t, x;
  std::cin >> s >> t >> x;

  if(s<=t){
    if(s<=x && x <=t){
      std::cout << "Yes" << '\n';
    }else{
      std::cout << "No" << '\n';
    }
  }else{
    if((s<=x && x <=23) or (0<=x && x <t)){
      std::cout << "Yes" << '\n';
    }else{
      std::cout << "No" << '\n';
    }
  }

  return 0;
}
