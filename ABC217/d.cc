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
  int L, Q;
  std::cin >> L >> Q;

  int  c, x;
  std::vector<int> v;
  std::vector<int> ans;

  v.push_back(L);

  for(int i=0; i<Q; i++){
    std::cin >> c >> x;
    if(c == 1){
      v.push_back(x);
    }else{
      sort(v.begin(), v.end());
      int index = std::lower_bound(v.begin(), v.end(), x)-v.begin();
      if(index != 0){
          ans.push_back(v[index]-v[index-1]);
      }else{
        ans.push_back(v[index]);
      }
    }
  }

  for(int i=0; i<(ans.end()-ans.begin()); i++){
    std::cout << ans[i] << '\n';
  }

  return 0;
}
