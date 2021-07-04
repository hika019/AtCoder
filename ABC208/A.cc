#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
#include <string>
#include <map>
using namespace std;

int main() {
  int n, k;

  std::cin >> n >> k;
  int ans = 0;
  if(n<=k){
    ans = k/n;
    k = k%n;
  }

  int a[n];
  int sorta[n];
  for(int i=0; i<n; i++){
    std::cin >> a[i];
    sorta[i] = a[i];
  }

  sort(sorta, sorta+n);

  //for(int i=0; i<n; i++) std::cout << sorta[i] << ' ';


  int sort_index = 0;

  for(int i=0; i<n; i++){
    std::cout << "k="<< sorta[sort_index] << '\n';
    if(k<0 && sorta[sort_index] == a[i]){
      std::cout << ans+1 << '\n';
      std::cout << "/* message */" << '\n';
      k--;
      sort_index++;
    }else{
      std::cout << ans << '\n';
    }
  }



  return 0;
}
