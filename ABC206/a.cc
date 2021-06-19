#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int n;
  std::cin >> n;

  n = n*1.08;
  if(n <206) std::cout << "Yay!" << '\n';
  else if(n == 206) std::cout << "so-so" << '\n';
  else std::cout << ":(" << '\n';

  return 0;
}
