#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int a[1001], ans[1001];

int main(){
  int n;
  std::cin >> n;
  for(int i=0; i<n; ++i){
    std::cin >> a[i];
    ans[i] = i+1;
  }

  sort(a, a+n);

  for(int i=0; i<n; ++i){
    if(a[i] != ans[i]){
      std::cout << "No" << '\n';
      return 0;
    }
  }

  std::cout << "Yes" << '\n';
  return 0;
}
