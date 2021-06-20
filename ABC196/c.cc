#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  long long int n, tmp, len;
  std::cin >> n;

  tmp= log10(n)+1;
  if(tmp %2 == 0)  tmp = n/(pow(10, tmp/2));
  else{
    tmp--;
    long long int mask = pow(10, (int)tmp);
    std::cout << tmp << '\n';
    std::cout << pow(10, (int)tmp) << '\n';
    std::cout << mask << '\n';
    tmp = n%mask;
  }

  std::cout << tmp << '\n';

  return 0;
}
