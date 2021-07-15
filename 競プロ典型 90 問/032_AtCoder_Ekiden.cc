#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
#include <string>
#include <map>
using namespace std;
 
bool cheack(vector<int>& nums, vector< pair<int, int> >& v){
  int nums_size = nums.size(), v_size = v.size();
  int x_ind =-1, y_ind =-1, i, j;
  //for(i=0; i<nums_size; i++) std::cout << nums[i] << ' ';
  //std::cout << '\n';
  for(i=0; i<v_size; i++){
    int x = nums.end()- find(nums.begin(), nums.end(), v[i].first);
    int y = nums.end()-find(nums.begin(), nums.end(), v[i].second);
    for(j=0; j<nums_size; j++){
      if(nums[j] == x) x_ind = i;
      if(nums[j] == y) y_ind = i;
    }
    //std::cout << abs(x-y) << '\n';
    if(abs(x-y) == 1) return false;
  }
  //std::cout << "/* message2 */" << '\n';
  return true;
}
 
int main(int argc, char const *argv[]) {
  int n, i, j, m, tmp, ans =20000;
  std::cin >> n;
  int a[n][n];
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      std::cin >> a[i][j];
    }
  }
 
  std::cin >> m;
  vector< pair<int, int> > v(m);
  for (i=0; i<m; i++){
     std::cin >> v[i].first >> v[i].second;
  }
 
 
  vector<int> nums(n);
  iota(nums.begin(), nums.end(), 1);
 
  do {
    if(cheack(nums, v)){
      //for(i=0; i<n; i++) std::cout << nums[i] << ' ';
      //std::cout << '\n';
      tmp = 0;
      for(i=0; i<n; i++){
        tmp += a[nums[i]-1][i];
      }
      ans = min(ans, tmp);
    }
  } while(next_permutation(nums.begin(), nums.end()));
  if(ans!= 20000)std::cout << ans << '\n';
  else std::cout << -1 << '\n';
  return 0;
}