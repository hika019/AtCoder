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
  long long int n, i, j, ans = 0;
  map<string, int> lists;
  std::cin >> n;

  for(i=0; i<n; i++){
    long long int l, tmp;
    std::string hoge = "";
    std::cin >> l;
    for(j=0; j<l; j++){
      std::cin >> tmp;
      hoge += to_string(tmp);
    }
    if(lists[hoge] == 0){
      ans += 1;
      lists[hoge] = 1;
    }

  }
  std::cout << ans << '\n';

  return 0;
}
