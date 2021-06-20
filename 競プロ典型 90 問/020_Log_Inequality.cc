#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  long int a, b, c, tmp;
  std::cin >> a >> b >> c;

  tmp = b*log2(c);

  if(log2(a)<tmp) std::cout << "Yes" << '\n';
  else std::cout << "No" << '\n';



  return 0;
}
