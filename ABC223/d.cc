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
  int n, m, i, index;
  std::cin >> n >> m;
  int a[n], b[n];
  for(i=0; i<m; i++) std::cin >> a[i] >> b[i];

  std::vector<int> ans;


  ans.push_back(a[0]);
  ans.push_back(b[0]);
  for(i=0; i<ans.size(); i++){
    std::cout << ans[i] << ' ';
  }

  index = lower_bound(ans.begin(), ans.end(), a[1])-ans.begin();
  if(ans.size() ==index) std::cout << "/* out of index */" << '\n';
  std::cout << index << '\n';



  return 0;
}
