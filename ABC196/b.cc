#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  string x;
  std::cin >> x;

  for(int i=0; i<x.length(); ++i){
    if(x[i] == '.') break;
    std::cout << x[i] << "";
  }

  return 0;
}
