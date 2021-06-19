#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int n, sum=0, i=1;

  std::cin >> n;

  while(sum < n){
    sum += i;
    ++i;
  }

  std::cout << i-1 << '\n';


  return 0;
}
