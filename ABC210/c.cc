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
  int n, k, i, j, ans=0, tmp_ans;
  std::cin >> n >> k;
  int array[n];
  for(i=0; i<n; i++) std::cin >> array[i];

  map<int, int> tmp_map;

  for(i=0; i<n-k+1; i++){
    tmp_map.clear();
    tmp_ans = 0;

    for(j=i; j<i+k; j++){
      if(tmp_map[array[j]] == 0) tmp_ans+=1;
      tmp_map[array[j]] =1;
    }
    ans = max(ans, tmp_ans);
    if(ans == k) break;
  }
  std::cout << ans << '\n';

  return 0;
}
